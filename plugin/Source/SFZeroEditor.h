#ifndef INCLUDED_SFZEROEDITOR_H
#define INCLUDED_SFZEROEDITOR_H

#include "JuceHeader.h"
#include "ClickableLabel.h"
#include "SFZeroAudioProcessor.h"
#include "CustomLookAndFeel.h"
#include "TemplateOptionButton.h"

namespace sfzero
{

class SFZeroEditor : public AudioProcessorEditor, public Timer, public ButtonListener
{
public:
  SFZeroEditor(SFZeroAudioProcessor *ownerFilter);
  ~SFZeroEditor();

  void paint(Graphics &g) override;
  void resized() override;
  void buttonClicked(Button *button) override;
  void timerCallback() override;

protected:
  // pathLabel options.
  enum
  {
    showingVersion,
    showingPath,
    showingProgress,
    showingSubsound,
  };

  // infoLabel options.
  enum
  {
    showingSoundInfo,
    showingVoiceInfo,
  };
  
  OpenButton fileLabel;
  ClickableLabel pathLabel;
  ClickableLabel infoLabel;
  Viewport viewport;
  int showing, showingInfo;
  ProgressBar *progressBar;
  CustomLookAndFeel lookAndFeel;

  SFZeroAudioProcessor *getProcessor() const { return static_cast<SFZeroAudioProcessor *>(getAudioProcessor()); }
  void chooseFile();
  void setFile(File *newFile);
  void updateFile(File *file);
  void showSoundInfo();
  void showVoiceInfo();
  void showVersion();
  void showPath();
  void showProgress();
  void hideProgress();
  void showSubsound();
};
}


#endif // INCLUDED_SFZEROEDITOR_H
