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
include boring_0/CMakeFiles/bor.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include boring_0/CMakeFiles/bor.dir/compiler_depend.make

# Include the progress variables for this target.
include boring_0/CMakeFiles/bor.dir/progress.make

# Include the compile flags for this target's objects.
include boring_0/CMakeFiles/bor.dir/flags.make

boring_0/CMakeFiles/bor.dir/bor.c.obj: boring_0/CMakeFiles/bor.dir/flags.make
boring_0/CMakeFiles/bor.dir/bor.c.obj: E:/git/GitCode/Maxwell/boring_0/bor.c
boring_0/CMakeFiles/bor.dir/bor.c.obj: boring_0/CMakeFiles/bor.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\git\GitCode\Maxwell\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object boring_0/CMakeFiles/bor.dir/bor.c.obj"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\boring_0 && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT boring_0/CMakeFiles/bor.dir/bor.c.obj -MF CMakeFiles\bor.dir\bor.c.obj.d -o CMakeFiles\bor.dir\bor.c.obj -c E:\git\GitCode\Maxwell\boring_0\bor.c

boring_0/CMakeFiles/bor.dir/bor.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/bor.dir/bor.c.i"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\boring_0 && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\git\GitCode\Maxwell\boring_0\bor.c > CMakeFiles\bor.dir\bor.c.i

boring_0/CMakeFiles/bor.dir/bor.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/bor.dir/bor.c.s"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\boring_0 && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\git\GitCode\Maxwell\boring_0\bor.c -o CMakeFiles\bor.dir\bor.c.s

# Object files for target bor
bor_OBJECTS = \
"CMakeFiles/bor.dir/bor.c.obj"

# External object files for target bor
bor_EXTERNAL_OBJECTS =

boring_0/bor.exe: boring_0/CMakeFiles/bor.dir/bor.c.obj
boring_0/bor.exe: boring_0/CMakeFiles/bor.dir/build.make
boring_0/bor.exe: boring_0/CMakeFiles/bor.dir/linklibs.rsp
boring_0/bor.exe: boring_0/CMakeFiles/bor.dir/objects1.rsp
boring_0/bor.exe: boring_0/CMakeFiles/bor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\git\GitCode\Maxwell\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable bor.exe"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\boring_0 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\bor.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
boring_0/CMakeFiles/bor.dir/build: boring_0/bor.exe
.PHONY : boring_0/CMakeFiles/bor.dir/build

boring_0/CMakeFiles/bor.dir/clean:
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\boring_0 && $(CMAKE_COMMAND) -P CMakeFiles\bor.dir\cmake_clean.cmake
.PHONY : boring_0/CMakeFiles/bor.dir/clean

boring_0/CMakeFiles/bor.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\git\GitCode\Maxwell E:\git\GitCode\Maxwell\boring_0 E:\git\GitCode\Maxwell\cmake-build-debug E:\git\GitCode\Maxwell\cmake-build-debug\boring_0 E:\git\GitCode\Maxwell\cmake-build-debug\boring_0\CMakeFiles\bor.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : boring_0/CMakeFiles/bor.dir/depend
