# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.24

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\CPL\codes\apps\CLion\ch-0\223.8617.54\bin\cmake\win\x64\bin\cmake.exe

# The command to remove a file.
RM = C:\CPL\codes\apps\CLion\ch-0\223.8617.54\bin\cmake\win\x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\CPL\untitled

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\CPL\untitled\cmake-build-debug

# Include any dependencies generated for this target.
include boring/CMakeFiles/exp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include boring/CMakeFiles/exp.dir/compiler_depend.make

# Include the progress variables for this target.
include boring/CMakeFiles/exp.dir/progress.make

# Include the compile flags for this target's objects.
include boring/CMakeFiles/exp.dir/flags.make

boring/CMakeFiles/exp.dir/exp.c.obj: boring/CMakeFiles/exp.dir/flags.make
boring/CMakeFiles/exp.dir/exp.c.obj: boring/CMakeFiles/exp.dir/includes_C.rsp
boring/CMakeFiles/exp.dir/exp.c.obj: C:/CPL/untitled/boring/exp.c
boring/CMakeFiles/exp.dir/exp.c.obj: boring/CMakeFiles/exp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\CPL\untitled\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object boring/CMakeFiles/exp.dir/exp.c.obj"
	cd /d C:\CPL\untitled\cmake-build-debug\boring && C:\CPL\codes\apps\CLion\ch-0\223.8617.54\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT boring/CMakeFiles/exp.dir/exp.c.obj -MF CMakeFiles\exp.dir\exp.c.obj.d -o CMakeFiles\exp.dir\exp.c.obj -c C:\CPL\untitled\boring\exp.c

boring/CMakeFiles/exp.dir/exp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/exp.dir/exp.c.i"
	cd /d C:\CPL\untitled\cmake-build-debug\boring && C:\CPL\codes\apps\CLion\ch-0\223.8617.54\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\CPL\untitled\boring\exp.c > CMakeFiles\exp.dir\exp.c.i

boring/CMakeFiles/exp.dir/exp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/exp.dir/exp.c.s"
	cd /d C:\CPL\untitled\cmake-build-debug\boring && C:\CPL\codes\apps\CLion\ch-0\223.8617.54\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\CPL\untitled\boring\exp.c -o CMakeFiles\exp.dir\exp.c.s

# Object files for target exp
exp_OBJECTS = \
"CMakeFiles/exp.dir/exp.c.obj"

# External object files for target exp
exp_EXTERNAL_OBJECTS =

boring/exp.exe: boring/CMakeFiles/exp.dir/exp.c.obj
boring/exp.exe: boring/CMakeFiles/exp.dir/build.make
boring/exp.exe: boring/CMakeFiles/exp.dir/linklibs.rsp
boring/exp.exe: boring/CMakeFiles/exp.dir/objects1.rsp
boring/exp.exe: boring/CMakeFiles/exp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\CPL\untitled\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable exp.exe"
	cd /d C:\CPL\untitled\cmake-build-debug\boring && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\exp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
boring/CMakeFiles/exp.dir/build: boring/exp.exe
.PHONY : boring/CMakeFiles/exp.dir/build

boring/CMakeFiles/exp.dir/clean:
	cd /d C:\CPL\untitled\cmake-build-debug\boring && $(CMAKE_COMMAND) -P CMakeFiles\exp.dir\cmake_clean.cmake
.PHONY : boring/CMakeFiles/exp.dir/clean

boring/CMakeFiles/exp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\CPL\untitled C:\CPL\untitled\boring C:\CPL\untitled\cmake-build-debug C:\CPL\untitled\cmake-build-debug\boring C:\CPL\untitled\cmake-build-debug\boring\CMakeFiles\exp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : boring/CMakeFiles/exp.dir/depend

