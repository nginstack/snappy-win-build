# snappy-win-build

snappy Windows build with Visual Studio.

Current version is a fork of google/snappy.

See info-win-build for general information about the
win-build effort.

To build, simply open the required solution file, and
you know how to use Visual Studio, right?
(or perhaps this is the wrong place for you.)

Additional changes:

* DLL support.

* Fixed a bunch of integer type size mismatches.

* Applied some static_cast to reduce compiler warnings.

Full list of changes against the origin git repository can be
found in win32/snappy.diff. (C++ sources only)
