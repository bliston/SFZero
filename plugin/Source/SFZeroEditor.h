#ifndef INCLUDED_SFZEROEDITOR_H
#define INCLUDED_SFZEROEDITOR_H

#include "JuceHeader.h"
#include "SFZeroAudioProcessor.h"

namespace Icons
{
    const String Done = CharPointer_UTF8("\uE5CA");
    const String Play = CharPointer_UTF8("\uE037");
    const String Pause = CharPointer_UTF8("\uE034");
    const String Rewind = CharPointer_UTF8("\uE045");
    const String FastForward = CharPointer_UTF8("\uE044");
    const String Record = CharPointer_UTF8("\uE061");
    const String Stop = CharPointer_UTF8("\uE047");
    const String FolderOpen = CharPointer_UTF8("\uE2C7");
    const String Smiley1 = CharPointer_UTF8("\uE813");
    
}

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
  
  TextButton fileLabel;
  Label pathLabel;
  Viewport viewport;
  int showing, showingInfo;
  ProgressBar *progressBar;
  Peels::MiddleLookAndFeel lookAndFeel;

  SFZeroAudioProcessor *getProcessor() const { return static_cast<SFZeroAudioProcessor *>(getAudioProcessor()); }
  void chooseFile();
  void setFile(File *newFile);
  void updateFile(File *file);
  void showPath();
  void showProgress();
  void hideProgress();

};
}


#endif // INCLUDED_SFZEROEDITOR_H
