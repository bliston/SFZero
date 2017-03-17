#include "SFZeroEditor.h"
#include "SFZeroAudioProcessor.h"

enum
{
  hMargin = 12,
  vMargin = 12,
  labelHeight = 25,
  progressBarHeight = 30,
  keyboardHeight = 54,
};

sfzero::SFZeroEditor::SFZeroEditor(SFZeroAudioProcessor *ownerFilter)
    : AudioProcessorEditor(ownerFilter), pathLabel(String::empty),
      showingInfo(showingSoundInfo),
      progressBar(nullptr)
{
  setSize(600, 300);

  addAndMakeVisible(&fileLabel);
  fileLabel.setButtonText("Choose Instrument");
  fileLabel.addListener(this);

  addAndMakeVisible(&pathLabel);
  pathLabel.setJustificationType(Justification::centred);
  Font font(fileLabel.getHeight() * 0.65f, Font::plain);
  pathLabel.setFont(font);
  pathLabel.setColour(Label::textColourId, Colours::grey);

  startTimer(200);

  File sfzFile = ownerFilter->getSfzFile();
  if (sfzFile != File::nonexistent)
  {
    updateFile(&sfzFile);
  }
}

sfzero::SFZeroEditor::~SFZeroEditor() { delete progressBar; }

void sfzero::SFZeroEditor::paint(Graphics &g) { g.fillAll(Colours::white); }

void sfzero::SFZeroEditor::resized()
{
    Rectangle<int> allOpts = getLocalBounds().reduced (10, 10);
    allOpts.removeFromBottom (allOpts.getHeight() / 2);
    
    const int numHorizIcons = 1;
    const int optStep = allOpts.getWidth() / numHorizIcons;
    fileLabel.setBounds (Rectangle<int> (allOpts.getX() + (0 % numHorizIcons) * optStep,
                                            allOpts.getY() + 0 * allOpts.getHeight(),
                                            optStep, allOpts.getHeight() / 1)
                            .reduced (10, 10));
    
    Rectangle<int> openButtonBounds = getLocalBounds();
    openButtonBounds.removeFromBottom (proportionOfHeight (0.12f));
    openButtonBounds = openButtonBounds.removeFromBottom (120);
    openButtonBounds.reduce (10, 10);
    pathLabel.setBounds (openButtonBounds.reduced (0));

}

void sfzero::SFZeroEditor::buttonClicked(Button *button)
{
  if (button == &fileLabel)
  {
    chooseFile();
  }
}

void sfzero::SFZeroEditor::timerCallback()
{
  if (showing == showingProgress)
  {
    auto processor = getProcessor();
    if (processor->loadProgress >= 1.0)
    {
      auto sound = processor->getSound();
      if (sound && (sound->numSubsounds() > 1))
      {
        //showSubsound();
      }
      else
      {
        showPath();
      }
      //showSoundInfo();
    }
  }

  if (showingInfo == showingVoiceInfo)
  {
    //showVoiceInfo();
  }
}

void sfzero::SFZeroEditor::chooseFile()
{
  String documentsFolder = File::getSpecialLocation(File::userDocumentsDirectory).getFullPathName();
  String folder = documentsFolder + "/Middle/Plugin Patches/Sampled Instrument Patches";
  FileChooser chooser("Select an SFZ file...", File(folder), "*.sfz;*.SFZ;*.sf2;*.SF2");
  if (chooser.browseForFileToOpen())
  {
    File sfzFile(chooser.getResult());
    setFile(&sfzFile);
  }
}

void sfzero::SFZeroEditor::setFile(File *newFile)
{
  auto processor = getProcessor();

  processor->setSfzFileThreaded(newFile);

  updateFile(newFile);
  showProgress();
}

void sfzero::SFZeroEditor::updateFile(File *file)
{
    pathLabel.setText(file->getFileName(), dontSendNotification);
    showPath();
}

void sfzero::SFZeroEditor::showPath()
{
    hideProgress();
    showing = showingPath;
}

void sfzero::SFZeroEditor::showProgress()
{
  auto processor = getProcessor();

  pathLabel.setVisible(false);
  infoLabel.setVisible(false);
  progressBar = new ProgressBar(processor->loadProgress);
  addAndMakeVisible(progressBar);
  int marginedWidth = getWidth() - 2 * hMargin;
  Rectangle<int> progressBarBounds = getLocalBounds();
  progressBarBounds.removeFromTop (getHeight() - 20);
  progressBar->setBounds(progressBarBounds);
  showing = showingProgress;
}

void sfzero::SFZeroEditor::hideProgress()
{
  if (progressBar == nullptr)
  {
    return;
  }

  removeChildComponent(progressBar);
  delete progressBar;
  progressBar = nullptr;

  pathLabel.setVisible(true);
  infoLabel.setVisible(true);
}
