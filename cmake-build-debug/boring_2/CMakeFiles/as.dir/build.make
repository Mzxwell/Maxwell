# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = "C:\CPL\CLion 2022.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\CPL\CLion 2022.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\CPL\untitled

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\CPL\untitled\cmake-build-debug

# Include any dependencies generated for this target.
include boring_2/CMakeFiles/as.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include boring_2/CMakeFiles/as.dir/compiler_depend.make

# Include the progress variables for this target.
include boring_2/CMakeFiles/as.dir/progress.make

# Include the compile flags for this target's objects.
include boring_2/CMakeFiles/as.dir/flags.make

boring_2/CMakeFiles/as.dir/as.c.obj: boring_2/CMakeFiles/as.dir/flags.make
boring_2/CMakeFiles/as.dir/as.c.obj: ../boring_2/as.c
boring_2/CMakeFiles/as.dir/as.c.obj: boring_2/CMakeFiles/as.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\CPL\untitled\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object boring_2/CMakeFiles/as.dir/as.c.obj"
	cd /d C:\CPL\untitled\cmake-build-debug\boring_2 && C:\CPL\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT boring_2/CMakeFiles/as.dir/as.c.obj -MF CMakeFiles\as.dir\as.c.obj.d -o CMakeFiles\as.dir\as.c.obj -c C:\CPL\untitled\boring_2\as.c

boring_2/CMakeFiles/as.dir/as.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/as.dir/as.c.i"
	cd /d C:\CPL\untitled\cmake-build-debug\boring_2 && C:\CPL\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\CPL\untitled\boring_2\as.c > CMakeFiles\as.dir\as.c.i

boring_2/CMakeFiles/as.dir/as.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/as.dir/as.c.s"
	cd /d C:\CPL\untitled\cmake-build-debug\boring_2 && C:\CPL\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\CPL\untitled\boring_2\as.c -o CMakeFiles\as.dir\as.c.s

# Object files for target as
as_OBJECTS = \
"CMakeFiles/as.dir/as.c.obj"

# External object files for target as
as_EXTERNAL_OBJECTS =

boring_2/as.exe: boring_2/CMakeFiles/as.dir/as.c.obj
boring_2/as.exe: boring_2/CMakeFiles/as.dir/build.make
boring_2/as.exe: boring_2/CMakeFiles/as.dir/linklibs.rsp
boring_2/as.exe: boring_2/CMakeFiles/as.dir/objects1.rsp
boring_2/as.exe: boring_2/CMakeFiles/as.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\CPL\untitled\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable as.exe"
	cd /d C:\CPL\untitled\cmake-build-debug\boring_2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\as.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
boring_2/CMakeFiles/as.dir/build: boring_2/as.exe
.PHONY : boring_2/CMakeFiles/as.dir/build

boring_2/CMakeFiles/as.dir/clean:
	cd /d C:\CPL\untitled\cmake-build-debug\boring_2 && $(CMAKE_COMMAND) -P CMakeFiles\as.dir\cmake_clean.cmake
.PHONY : boring_2/CMakeFiles/as.dir/clean

boring_2/CMakeFiles/as.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\CPL\untitled C:\CPL\untitled\boring_2 C:\CPL\untitled\cmake-build-debug C:\CPL\untitled\cmake-build-debug\boring_2 C:\CPL\untitled\cmake-build-debug\boring_2\CMakeFiles\as.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : boring_2/CMakeFiles/as.dir/depend

