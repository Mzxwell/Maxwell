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
include homework/1-homework/CMakeFiles/time.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include homework/1-homework/CMakeFiles/time.dir/compiler_depend.make

# Include the progress variables for this target.
include homework/1-homework/CMakeFiles/time.dir/progress.make

# Include the compile flags for this target's objects.
include homework/1-homework/CMakeFiles/time.dir/flags.make

homework/1-homework/CMakeFiles/time.dir/time.c.obj: homework/1-homework/CMakeFiles/time.dir/flags.make
homework/1-homework/CMakeFiles/time.dir/time.c.obj: C:/CPL/untitled/homework/1-homework/time.c
homework/1-homework/CMakeFiles/time.dir/time.c.obj: homework/1-homework/CMakeFiles/time.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\CPL\untitled\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object homework/1-homework/CMakeFiles/time.dir/time.c.obj"
	cd /d C:\CPL\untitled\cmake-build-debug\homework\1-homework && C:\CPL\codes\apps\CLion\ch-0\223.8617.54\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT homework/1-homework/CMakeFiles/time.dir/time.c.obj -MF CMakeFiles\time.dir\time.c.obj.d -o CMakeFiles\time.dir\time.c.obj -c C:\CPL\untitled\homework\1-homework\time.c

homework/1-homework/CMakeFiles/time.dir/time.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/time.dir/time.c.i"
	cd /d C:\CPL\untitled\cmake-build-debug\homework\1-homework && C:\CPL\codes\apps\CLion\ch-0\223.8617.54\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\CPL\untitled\homework\1-homework\time.c > CMakeFiles\time.dir\time.c.i

homework/1-homework/CMakeFiles/time.dir/time.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/time.dir/time.c.s"
	cd /d C:\CPL\untitled\cmake-build-debug\homework\1-homework && C:\CPL\codes\apps\CLion\ch-0\223.8617.54\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\CPL\untitled\homework\1-homework\time.c -o CMakeFiles\time.dir\time.c.s

# Object files for target time
time_OBJECTS = \
"CMakeFiles/time.dir/time.c.obj"

# External object files for target time
time_EXTERNAL_OBJECTS =

homework/1-homework/time.exe: homework/1-homework/CMakeFiles/time.dir/time.c.obj
homework/1-homework/time.exe: homework/1-homework/CMakeFiles/time.dir/build.make
homework/1-homework/time.exe: homework/1-homework/CMakeFiles/time.dir/linklibs.rsp
homework/1-homework/time.exe: homework/1-homework/CMakeFiles/time.dir/objects1.rsp
homework/1-homework/time.exe: homework/1-homework/CMakeFiles/time.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\CPL\untitled\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable time.exe"
	cd /d C:\CPL\untitled\cmake-build-debug\homework\1-homework && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\time.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
homework/1-homework/CMakeFiles/time.dir/build: homework/1-homework/time.exe
.PHONY : homework/1-homework/CMakeFiles/time.dir/build

homework/1-homework/CMakeFiles/time.dir/clean:
	cd /d C:\CPL\untitled\cmake-build-debug\homework\1-homework && $(CMAKE_COMMAND) -P CMakeFiles\time.dir\cmake_clean.cmake
.PHONY : homework/1-homework/CMakeFiles/time.dir/clean

homework/1-homework/CMakeFiles/time.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\CPL\untitled C:\CPL\untitled\homework\1-homework C:\CPL\untitled\cmake-build-debug C:\CPL\untitled\cmake-build-debug\homework\1-homework C:\CPL\untitled\cmake-build-debug\homework\1-homework\CMakeFiles\time.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : homework/1-homework/CMakeFiles/time.dir/depend

