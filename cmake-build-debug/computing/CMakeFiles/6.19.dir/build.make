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
include computing/CMakeFiles/6.19.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include computing/CMakeFiles/6.19.dir/compiler_depend.make

# Include the progress variables for this target.
include computing/CMakeFiles/6.19.dir/progress.make

# Include the compile flags for this target's objects.
include computing/CMakeFiles/6.19.dir/flags.make

computing/CMakeFiles/6.19.dir/6.19.c.obj: computing/CMakeFiles/6.19.dir/flags.make
computing/CMakeFiles/6.19.dir/6.19.c.obj: C:/CPL/untitled/computing/6.19.c
computing/CMakeFiles/6.19.dir/6.19.c.obj: computing/CMakeFiles/6.19.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\CPL\untitled\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object computing/CMakeFiles/6.19.dir/6.19.c.obj"
	cd /d C:\CPL\untitled\cmake-build-debug\computing && C:\CPL\codes\apps\CLion\ch-0\223.8617.54\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT computing/CMakeFiles/6.19.dir/6.19.c.obj -MF CMakeFiles\6.19.dir\6.19.c.obj.d -o CMakeFiles\6.19.dir\6.19.c.obj -c C:\CPL\untitled\computing\6.19.c

computing/CMakeFiles/6.19.dir/6.19.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/6.19.dir/6.19.c.i"
	cd /d C:\CPL\untitled\cmake-build-debug\computing && C:\CPL\codes\apps\CLion\ch-0\223.8617.54\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\CPL\untitled\computing\6.19.c > CMakeFiles\6.19.dir\6.19.c.i

computing/CMakeFiles/6.19.dir/6.19.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/6.19.dir/6.19.c.s"
	cd /d C:\CPL\untitled\cmake-build-debug\computing && C:\CPL\codes\apps\CLion\ch-0\223.8617.54\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\CPL\untitled\computing\6.19.c -o CMakeFiles\6.19.dir\6.19.c.s

# Object files for target 6.19
6_19_OBJECTS = \
"CMakeFiles/6.19.dir/6.19.c.obj"

# External object files for target 6.19
6_19_EXTERNAL_OBJECTS =

computing/6.19.exe: computing/CMakeFiles/6.19.dir/6.19.c.obj
computing/6.19.exe: computing/CMakeFiles/6.19.dir/build.make
computing/6.19.exe: computing/CMakeFiles/6.19.dir/linklibs.rsp
computing/6.19.exe: computing/CMakeFiles/6.19.dir/objects1.rsp
computing/6.19.exe: computing/CMakeFiles/6.19.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\CPL\untitled\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 6.19.exe"
	cd /d C:\CPL\untitled\cmake-build-debug\computing && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\6.19.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
computing/CMakeFiles/6.19.dir/build: computing/6.19.exe
.PHONY : computing/CMakeFiles/6.19.dir/build

computing/CMakeFiles/6.19.dir/clean:
	cd /d C:\CPL\untitled\cmake-build-debug\computing && $(CMAKE_COMMAND) -P CMakeFiles\6.19.dir\cmake_clean.cmake
.PHONY : computing/CMakeFiles/6.19.dir/clean

computing/CMakeFiles/6.19.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\CPL\untitled C:\CPL\untitled\computing C:\CPL\untitled\cmake-build-debug C:\CPL\untitled\cmake-build-debug\computing C:\CPL\untitled\cmake-build-debug\computing\CMakeFiles\6.19.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : computing/CMakeFiles/6.19.dir/depend

