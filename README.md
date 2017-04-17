# C++
## Using Cmake and make
### `make`
Make is a tool that controls the generation of executables and other non-source files of a program from the program's source files

The `make` tool needs to know how to build your program. It gets its knowledge of how to build your program from a file called `makefile.txt`. This makefile lists each of the non-source files and how to compute it from other files.

When you write a program, you should write a makefile for it, so that it is possible to use `make` to build and install the program.

If you have a few source files and then run `make`, it doesn't recompile the whole thing. It updates only those non-source files that depend directly or indirectly on the source files that you changed.

### `Cmake`
CMake stands for cross-platform make. CMake recognizes which compilers to use for a given kind of source. The build process has one step if you use a `makefile`, namely typing `make` at the command line. For CMake, there are two steps; First, you need to setup your build environment. This creates a makefile or something equivalent, depending on the build system of your choice. The build system can be passed to CMake as a parameter. However, CMake makes reasonable default choices depending on your system configuration. Second, you perform the actual build in the selected build system.


### Comparison
When comparing CMake with Make, there are several advantages of using CMake:
- Cross platform discovery of system libraries
- Automatic discovery and configuration of the toolchain
- Easier to compile your files into a shared library in a platform agnostic way, and in general easier to use than make

### Instruction
Make a `CmakeLists.txt`

Inside source, make a build directory
``` bash
$ mkdir build
```

Change directory into the build folder
``` bash
$ cd build
```

Run `cmake`!
``` bash
$ cmake ..
```
