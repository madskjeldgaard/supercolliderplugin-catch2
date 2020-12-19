# PluginWithTests

Author: Mads Kjeldgaard

A simple plugin example with the [Catch2](https://github.com/catchorg/Catch2) testing framework added as a submodule and setup properly in CMake.

It is setup so that the `plugins` folder is included in the header search path of the `test` folder so that including `plugins/CrazyPluginHeader.hpp` in your tests may be done using `#include "CrazyPluginHeader.hpp"`

### Requirements

- CMake >= 3.5
- SuperCollider source code

### Building

Clone the project:

    git clone --recurse-submodules https://github.com/madskjeldgaard/supercolliderplugin-catch2 
    cd pluginwithtests
    mkdir build
    cd build

Then, use CMake to configure and build it:

    cmake .. -DCMAKE_BUILD_TYPE=Release
    cmake --build . --config Release
    cmake --build . --config Release --target install

You may want to manually specify the install location in the first step to point it at your
SuperCollider extensions directory: add the option `-DCMAKE_INSTALL_PREFIX=/path/to/extensions`.

It's expected that the SuperCollider repo is cloned at `../supercollider` relative to this repo. If
it's not: add the option `-DSC_PATH=/path/to/sc/source`.

### Developing

Use the command in `regenerate` to update CMakeLists.txt when you add or remove files from the
project. You don't need to run it if you only change the contents of existing files. You may need to
edit the command if you add, remove, or rename plugins, to match the new plugin paths. Run the
script with `--help` to see all available options.

### Testing

From the root of the repository, run
```bash
./build/tests
```

This will run the tests defined in `test/main.cpp`
