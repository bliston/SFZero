#ifndef SFZDebug_h
#define SFZDebug_h

#include "../JuceLibraryCode/JuceHeader.h"

// Juce's standard DBG is all wrong; it only writes to stdout.  So replace it
// with one that'll write to the real log.

#undef DBG
#if JUCE_DEBUG
	#define DBG(msg)	Logger::writeToLog(msg)
#else
	#define	DBG(msg)
#endif


#endif
