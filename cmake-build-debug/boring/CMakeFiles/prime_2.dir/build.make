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
CMAKE_COMMAND = C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\git\GitCode\Maxwell

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\git\GitCode\Maxwell\cmake-build-debug

# Include any dependencies generated for this target.
include boring/CMakeFiles/prime_2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include boring/CMakeFiles/prime_2.dir/compiler_depend.make

# Include the progress variables for this target.
include boring/CMakeFiles/prime_2.dir/progress.make

# Include the compile flags for this target's objects.
include boring/CMakeFiles/prime_2.dir/flags.make

boring/CMakeFiles/prime_2.dir/prime_2.c.obj: boring/CMakeFiles/prime_2.dir/flags.make
boring/CMakeFiles/prime_2.dir/prime_2.c.obj: boring/CMakeFiles/prime_2.dir/includes_C.rsp
boring/CMakeFiles/prime_2.dir/prime_2.c.obj: E:/git/GitCode/Maxwell/boring/prime_2.c
boring/CMakeFiles/prime_2.dir/prime_2.c.obj: boring/CMakeFiles/prime_2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\git\GitCode\Maxwell\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object boring/CMakeFiles/prime_2.dir/prime_2.c.obj"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\boring && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT boring/CMakeFiles/prime_2.dir/prime_2.c.obj -MF CMakeFiles\prime_2.dir\prime_2.c.obj.d -o CMakeFiles\prime_2.dir\prime_2.c.obj -c E:\git\GitCode\Maxwell\boring\prime_2.c

boring/CMakeFiles/prime_2.dir/prime_2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/prime_2.dir/prime_2.c.i"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\boring && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\git\GitCode\Maxwell\boring\prime_2.c > CMakeFiles\prime_2.dir\prime_2.c.i

boring/CMakeFiles/prime_2.dir/prime_2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/prime_2.dir/prime_2.c.s"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\boring && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\git\GitCode\Maxwell\boring\prime_2.c -o CMakeFiles\prime_2.dir\prime_2.c.s

# Object files for target prime_2
prime_2_OBJECTS = \
"CMakeFiles/prime_2.dir/prime_2.c.obj"

# External object files for target prime_2
prime_2_EXTERNAL_OBJECTS =

boring/prime_2.exe: boring/CMakeFiles/prime_2.dir/prime_2.c.obj
boring/prime_2.exe: boring/CMakeFiles/prime_2.dir/build.make
boring/prime_2.exe: boring/CMakeFiles/prime_2.dir/linklibs.rsp
boring/prime_2.exe: boring/CMakeFiles/prime_2.dir/objects1.rsp
boring/prime_2.exe: boring/CMakeFiles/prime_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\git\GitCode\Maxwell\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable prime_2.exe"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\boring && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\prime_2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
boring/CMakeFiles/prime_2.dir/build: boring/prime_2.exe
.PHONY : boring/CMakeFiles/prime_2.dir/build

boring/CMakeFiles/prime_2.dir/clean:
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\boring && $(CMAKE_COMMAND) -P CMakeFiles\prime_2.dir\cmake_clean.cmake
.PHONY : boring/CMakeFiles/prime_2.dir/clean

boring/CMakeFiles/prime_2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\git\GitCode\Maxwell E:\git\GitCode\Maxwell\boring E:\git\GitCode\Maxwell\cmake-build-debug E:\git\GitCode\Maxwell\cmake-build-debug\boring E:\git\GitCode\Maxwell\cmake-build-debug\boring\CMakeFiles\prime_2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : boring/CMakeFiles/prime_2.dir/depend
