# Automatically generated makefile, created by the Introjucer
# Don't edit this file! Your changes will be overwritten when you re-save the Introjucer project!

# (this disables dependency generation if multiple architectures are set)
DEPFLAGS := $(if $(word 2, $(TARGET_ARCH)), , -MMD)

ifndef CONFIG
  CONFIG=Debug
endif

ifeq ($(CONFIG),Debug)
  BINDIR := build
  LIBDIR := build
  OBJDIR := build/intermediate/Debug
  OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := -march=native
  endif

  CPPFLAGS := $(DEPFLAGS) -D "LINUX=1" -D "DEBUG=1" -D "_DEBUG=1" -D "JUCER_LINUX_MAKE_7346DA2A=1" -D "JUCE_APP_VERSION=1.0.0" -D "JUCE_APP_VERSION_HEX=0x10000" -I /usr/include -I /usr/include/freetype2 -I ../../../../SDKs/vstsdk2.4 -I ../../JuceLibraryCode -I ../../../../SDKs/juce/modules
  CFLAGS += $(CPPFLAGS) $(TARGET_ARCH) -g -ggdb -fPIC -O0
  CXXFLAGS += $(CFLAGS) -std=c++11
  LDFLAGS += $(TARGET_ARCH) -L$(BINDIR) -L$(LIBDIR) -Wl,--no-undefined -shared -L/usr/X11R6/lib/ -lX11 -lXext -lXinerama -lasound -ldl -lfreetype -lpthread -lrt 

  TARGET := SFZero.so
  BLDCMD = $(CXX) -o $(OUTDIR)/$(TARGET) $(OBJECTS) $(LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(OUTDIR)/$(TARGET) $(OBJDIR)
endif

ifeq ($(CONFIG),Release)
  BINDIR := build
  LIBDIR := build
  OBJDIR := build/intermediate/Release
  OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := -march=native
  endif

  CPPFLAGS := $(DEPFLAGS) -D "LINUX=1" -D "NDEBUG=1" -D "JUCER_LINUX_MAKE_7346DA2A=1" -D "JUCE_APP_VERSION=1.0.0" -D "JUCE_APP_VERSION_HEX=0x10000" -I /usr/include -I /usr/include/freetype2 -I ../../../../SDKs/vstsdk2.4 -I ../../JuceLibraryCode -I ../../../../SDKs/juce/modules
  CFLAGS += $(CPPFLAGS) $(TARGET_ARCH) -fPIC -Os
  CXXFLAGS += $(CFLAGS) -std=c++11
  LDFLAGS += $(TARGET_ARCH) -L$(BINDIR) -L$(LIBDIR) -Wl,--no-undefined -shared -fvisibility=hidden -L/usr/X11R6/lib/ -lX11 -lXext -lXinerama -lasound -ldl -lfreetype -lpthread -lrt 

  TARGET := SFZero.so
  BLDCMD = $(CXX) -o $(OUTDIR)/$(TARGET) $(OBJECTS) $(LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(OUTDIR)/$(TARGET) $(OBJDIR)
endif

OBJECTS := \
  $(OBJDIR)/ClickableLabel_50df57bb.o \
  $(OBJDIR)/SFZeroAudioProcessor_31b1f2c0.o \
  $(OBJDIR)/SFZeroEditor_db20151.o \
  $(OBJDIR)/juce_audio_basics_4392f2f2.o \
  $(OBJDIR)/juce_audio_devices_304d5330.o \
  $(OBJDIR)/juce_audio_formats_5ece9cd0.o \
  $(OBJDIR)/juce_audio_processors_7426baaa.o \
  $(OBJDIR)/juce_audio_utils_88c702f0.o \
  $(OBJDIR)/juce_core_fbf39fd4.o \
  $(OBJDIR)/juce_data_structures_5f963c90.o \
  $(OBJDIR)/juce_events_b44a0248.o \
  $(OBJDIR)/juce_graphics_6f147dac.o \
  $(OBJDIR)/juce_gui_basics_ad892f28.o \
  $(OBJDIR)/juce_gui_extra_1f3d0ab0.o \
  $(OBJDIR)/juce_PluginUtilities_8cdd363c.o \
  $(OBJDIR)/juce_VST_Wrapper_1f9f0d45.o \
  $(OBJDIR)/juce_VST3_Wrapper_bdab0943.o \
  $(OBJDIR)/RIFF_e5da8c0.o \
  $(OBJDIR)/SF2_e4c7c8a0.o \
  $(OBJDIR)/SF2Generator_6982ae5d.o \
  $(OBJDIR)/SF2Reader_864d87c3.o \
  $(OBJDIR)/SF2Sound_b0fbd119.o \
  $(OBJDIR)/SFZDebug_3cad0935.o \
  $(OBJDIR)/SFZEG_3b8823aa.o \
  $(OBJDIR)/SFZero_d3693890.o \
  $(OBJDIR)/SFZReader_ca0975eb.o \
  $(OBJDIR)/SFZRegion_52a7c39c.o \
  $(OBJDIR)/SFZSample_d1d4c752.o \
  $(OBJDIR)/SFZSound_dc757df1.o \
  $(OBJDIR)/SFZSynth_836b119e.o \
  $(OBJDIR)/SFZVoice_bc0cc94.o \

.PHONY: clean

$(OUTDIR)/$(TARGET): $(OBJECTS) $(RESOURCES)
	@echo Linking SFZero
	-@mkdir -p $(BINDIR)
	-@mkdir -p $(LIBDIR)
	-@mkdir -p $(OUTDIR)
	@$(BLDCMD)

clean:
	@echo Cleaning SFZero
	@$(CLEANCMD)

strip:
	@echo Stripping SFZero
	-@strip --strip-unneeded $(OUTDIR)/$(TARGET)

$(OBJDIR)/ClickableLabel_50df57bb.o: ../../Source/ClickableLabel.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling ClickableLabel.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/SFZeroAudioProcessor_31b1f2c0.o: ../../Source/SFZeroAudioProcessor.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling SFZeroAudioProcessor.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/SFZeroEditor_db20151.o: ../../Source/SFZeroEditor.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling SFZeroEditor.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_basics_4392f2f2.o: ../../../../SDKs/juce/modules/juce_audio_basics/juce_audio_basics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_basics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_devices_304d5330.o: ../../../../SDKs/juce/modules/juce_audio_devices/juce_audio_devices.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_devices.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_formats_5ece9cd0.o: ../../../../SDKs/juce/modules/juce_audio_formats/juce_audio_formats.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_formats.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_processors_7426baaa.o: ../../../../SDKs/juce/modules/juce_audio_processors/juce_audio_processors.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_processors.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_utils_88c702f0.o: ../../../../SDKs/juce/modules/juce_audio_utils/juce_audio_utils.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_utils.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_core_fbf39fd4.o: ../../../../SDKs/juce/modules/juce_core/juce_core.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_core.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_data_structures_5f963c90.o: ../../../../SDKs/juce/modules/juce_data_structures/juce_data_structures.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_data_structures.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_events_b44a0248.o: ../../../../SDKs/juce/modules/juce_events/juce_events.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_events.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_graphics_6f147dac.o: ../../../../SDKs/juce/modules/juce_graphics/juce_graphics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_graphics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_gui_basics_ad892f28.o: ../../../../SDKs/juce/modules/juce_gui_basics/juce_gui_basics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_gui_basics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_gui_extra_1f3d0ab0.o: ../../../../SDKs/juce/modules/juce_gui_extra/juce_gui_extra.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_gui_extra.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_PluginUtilities_8cdd363c.o: ../../../../SDKs/juce/modules/juce_audio_plugin_client/utility/juce_PluginUtilities.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_PluginUtilities.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_VST_Wrapper_1f9f0d45.o: ../../../../SDKs/juce/modules/juce_audio_plugin_client/VST/juce_VST_Wrapper.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_VST_Wrapper.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_VST3_Wrapper_bdab0943.o: ../../../../SDKs/juce/modules/juce_audio_plugin_client/VST3/juce_VST3_Wrapper.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_VST3_Wrapper.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/RIFF_e5da8c0.o: ../../../../SDKs/juce/modules/SFZero/sfzero/RIFF.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling RIFF.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/SF2_e4c7c8a0.o: ../../../../SDKs/juce/modules/SFZero/sfzero/SF2.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling SF2.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/SF2Generator_6982ae5d.o: ../../../../SDKs/juce/modules/SFZero/sfzero/SF2Generator.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling SF2Generator.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/SF2Reader_864d87c3.o: ../../../../SDKs/juce/modules/SFZero/sfzero/SF2Reader.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling SF2Reader.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/SF2Sound_b0fbd119.o: ../../../../SDKs/juce/modules/SFZero/sfzero/SF2Sound.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling SF2Sound.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/SFZDebug_3cad0935.o: ../../../../SDKs/juce/modules/SFZero/sfzero/SFZDebug.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling SFZDebug.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/SFZEG_3b8823aa.o: ../../../../SDKs/juce/modules/SFZero/sfzero/SFZEG.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling SFZEG.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/SFZero_d3693890.o: ../../../../SDKs/juce/modules/SFZero/SFZero.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling SFZero.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/SFZReader_ca0975eb.o: ../../../../SDKs/juce/modules/SFZero/sfzero/SFZReader.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling SFZReader.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/SFZRegion_52a7c39c.o: ../../../../SDKs/juce/modules/SFZero/sfzero/SFZRegion.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling SFZRegion.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/SFZSample_d1d4c752.o: ../../../../SDKs/juce/modules/SFZero/sfzero/SFZSample.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling SFZSample.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/SFZSound_dc757df1.o: ../../../../SDKs/juce/modules/SFZero/sfzero/SFZSound.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling SFZSound.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/SFZSynth_836b119e.o: ../../../../SDKs/juce/modules/SFZero/sfzero/SFZSynth.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling SFZSynth.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/SFZVoice_bc0cc94.o: ../../../../SDKs/juce/modules/SFZero/sfzero/SFZVoice.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling SFZVoice.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

-include $(OBJECTS:%.o=%.d)
