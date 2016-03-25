# SFZero, the Juce module version

This is a fork of the [original SFZero by Steve Folta](https://github.com/stevefolta/SFZero), with the following changes:

* has been converted to a Juce module, so you can easily consume it from your own projects (you still get the sample player plugin, but it now includes that module)
* compiles against Juce 4.1
* conveniently sits within its own `sfzero::` namespace
* has a tidied-up code base, so it now builds with as few warnings as possible on all platforms and on both 32/64 bit architectures. I also simplified logging, added a support for synchronous sample loading, and fixed a few bugs.

For more information, please see also this [blog article](http://www.mucoder.net/blog/2016/03/24/sfzero.html)



