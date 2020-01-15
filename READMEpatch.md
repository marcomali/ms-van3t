These build instructions relate to the source code version of ```vsimrti```. To build the ```ns3-federate``` from
the binary version of ```vsimrti``` follow the manual that guides you to the installation using ```ns3_installer.sh```.
When using the installer all dependencies but ```ns3``` and ```premake``` itself have to be manually resolved too.

# Dependencies

The ```ns3-federate``` has the following dependencies:

1. ```dev-libs/protobuf```
  1. ```dev-libs/protobuf[test]? ( dev-cpp/gtest )```
2. ```net-misc/ns3```

Building ```ns3-federate``` introduces new dependencies:

* ```dev-util/premake``` and
* ```dev-util/premake-autoconf```

The source code and binary tar balls for Windows, Linux and Mac OS X
of ```premake``` are available at https://premake.github.io/download.html.
When you choose the binary version then the tar ball extracts just one single binary
called ```premake5``` for direct use. Please keep in mind that ```premake``` is
written as a c-binding to a modified variant of ```lua``` that
is statically linked in. The currently (```premake5-alpha12```) linked in ```lua``` version is ```5.3``` which should be
considered when placing extensions of ```premake```.

The building of ```premake5``` from source for linux is strait forward and is done with ```GNU make```.

```bash
~$ make -f Bootstrap.mak linux
~# cp bin/release/premake5 /usr/local/bin
```

The second dependency ```premake5-autoconf``` can be downloaded from https://github.com/Blizzard/premake-autoconf.git.
It consists of a flat directory of ```lua``` files. These can be directly placed in the ```ns3-federate``` build directory or
in a directory your ```premake5``` can find it. Usually it will show the search directories that is looking into for modules when a module was not found, i.e. ```/usr/local/share/lua/5.3/```. The ```premake5-autoconf``` module introduces 1. support for ```autoconf``` style checks for headers and libraries and 2. full ```clang``` support.

Ubuntu 16.04 xenial users can use a package from "PPA for Paul McEnery", see https://launchpad.net/~pmcenery/+archive/ubuntu/ppa/+packages?field.name_filter=premake&field.status_filter=published&field.series_filter=.

# Build from ```vsimrti``` source

```bash
~$ premake5 gmake
~# make config=debug clean
~# make config=debug # config=release
```

Some source file are generated by the OMNeT++ message compiler or the protobuf compiler. To regenerate these files
pass the options ```--generate-opp-messages``` and/or ```--generate-protobuf```. The regeneration is done during ```make```.

# Install from ```vsimrti``` source

To trigger the install target pass ```--install``` to ```premake5``` and run ```make``` as super user.

```bash
~$ premake5 gmake --install
~# make config=debug clean
~# make config=debug
```