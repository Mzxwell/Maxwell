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
include boring/CMakeFiles/experience.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include boring/CMakeFiles/experience.dir/compiler_depend.make

# Include the progress variables for this target.
include boring/CMakeFiles/experience.dir/progress.make

# Include the compile flags for this target's objects.
include boring/CMakeFiles/experience.dir/flags.make

boring/CMakeFiles/experience.dir/experience.c.obj: boring/CMakeFiles/experience.dir/flags.make
boring/CMakeFiles/experience.dir/experience.c.obj: boring/CMakeFiles/experience.dir/includes_C.rsp
boring/CMakeFiles/experience.dir/experience.c.obj: ../boring/experience.c
boring/CMakeFiles/experience.dir/experience.c.obj: boring/CMakeFiles/experience.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\CPL\untitled\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object boring/CMakeFiles/experience.dir/experience.c.obj"
	cd /d C:\CPL\untitled\cmake-build-debug\boring && C:\CPL\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT boring/CMakeFiles/experience.dir/experience.c.obj -MF CMakeFiles\experience.dir\experience.c.obj.d -o CMakeFiles\experience.dir\experience.c.obj -c C:\CPL\untitled\boring\experience.c

boring/CMakeFiles/experience.dir/experience.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/experience.dir/experience.c.i"
	cd /d C:\CPL\untitled\cmake-build-debug\boring && C:\CPL\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\CPL\untitled\boring\experience.c > CMakeFiles\experience.dir\experience.c.i

boring/CMakeFiles/experience.dir/experience.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/experience.dir/experience.c.s"
	cd /d C:\CPL\untitled\cmake-build-debug\boring && C:\CPL\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\CPL\untitled\boring\experience.c -o CMakeFiles\experience.dir\experience.c.s

# Object files for target experience
experience_OBJECTS = \
"CMakeFiles/experience.dir/experience.c.obj"

# External object files for target experience
experience_EXTERNAL_OBJECTS =

boring/experience.exe: boring/CMakeFiles/experience.dir/experience.c.obj
boring/experience.exe: boring/CMakeFiles/experience.dir/build.make
boring/experience.exe: boring/CMakeFiles/experience.dir/linklibs.rsp
boring/experience.exe: boring/CMakeFiles/experience.dir/objects1.rsp
boring/experience.exe: boring/CMakeFiles/experience.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\CPL\untitled\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable experience.exe"
	cd /d C:\CPL\untitled\cmake-build-debug\boring && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\experience.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
boring/CMakeFiles/experience.dir/build: boring/experience.exe
.PHONY : boring/CMakeFiles/experience.dir/build

boring/CMakeFiles/experience.dir/clean:
	cd /d C:\CPL\untitled\cmake-build-debug\boring && $(CMAKE_COMMAND) -P CMakeFiles\experience.dir\cmake_clean.cmake
.PHONY : boring/CMakeFiles/experience.dir/clean

boring/CMakeFiles/experience.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\CPL\untitled C:\CPL\untitled\boring C:\CPL\untitled\cmake-build-debug C:\CPL\untitled\cmake-build-debug\boring C:\CPL\untitled\cmake-build-debug\boring\CMakeFiles\experience.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : boring/CMakeFiles/experience.dir/depend

