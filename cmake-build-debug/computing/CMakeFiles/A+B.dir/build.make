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
include computing/CMakeFiles/A+B.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include computing/CMakeFiles/A+B.dir/compiler_depend.make

# Include the progress variables for this target.
include computing/CMakeFiles/A+B.dir/progress.make

# Include the compile flags for this target's objects.
include computing/CMakeFiles/A+B.dir/flags.make

computing/CMakeFiles/A+B.dir/A+B.c.obj: computing/CMakeFiles/A+B.dir/flags.make
computing/CMakeFiles/A+B.dir/A+B.c.obj: E:/git/GitCode/Maxwell/computing/A+B.c
computing/CMakeFiles/A+B.dir/A+B.c.obj: computing/CMakeFiles/A+B.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\git\GitCode\Maxwell\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object computing/CMakeFiles/A+B.dir/A+B.c.obj"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\computing && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT computing/CMakeFiles/A+B.dir/A+B.c.obj -MF CMakeFiles\A+B.dir\A+B.c.obj.d -o CMakeFiles\A+B.dir\A+B.c.obj -c E:\git\GitCode\Maxwell\computing\A+B.c

computing/CMakeFiles/A+B.dir/A+B.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/A+B.dir/A+B.c.i"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\computing && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\git\GitCode\Maxwell\computing\A+B.c > CMakeFiles\A+B.dir\A+B.c.i

computing/CMakeFiles/A+B.dir/A+B.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/A+B.dir/A+B.c.s"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\computing && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\git\GitCode\Maxwell\computing\A+B.c -o CMakeFiles\A+B.dir\A+B.c.s

# Object files for target A+B
A___B_OBJECTS = \
"CMakeFiles/A+B.dir/A+B.c.obj"

# External object files for target A+B
A___B_EXTERNAL_OBJECTS =

computing/A+B.exe: computing/CMakeFiles/A+B.dir/A+B.c.obj
computing/A+B.exe: computing/CMakeFiles/A+B.dir/build.make
computing/A+B.exe: computing/CMakeFiles/A+B.dir/linklibs.rsp
computing/A+B.exe: computing/CMakeFiles/A+B.dir/objects1.rsp
computing/A+B.exe: computing/CMakeFiles/A+B.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\git\GitCode\Maxwell\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable A+B.exe"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\computing && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\A+B.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
computing/CMakeFiles/A+B.dir/build: computing/A+B.exe
.PHONY : computing/CMakeFiles/A+B.dir/build

computing/CMakeFiles/A+B.dir/clean:
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\computing && $(CMAKE_COMMAND) -P CMakeFiles\A+B.dir\cmake_clean.cmake
.PHONY : computing/CMakeFiles/A+B.dir/clean

computing/CMakeFiles/A+B.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\git\GitCode\Maxwell E:\git\GitCode\Maxwell\computing E:\git\GitCode\Maxwell\cmake-build-debug E:\git\GitCode\Maxwell\cmake-build-debug\computing E:\git\GitCode\Maxwell\cmake-build-debug\computing\CMakeFiles\A+B.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : computing/CMakeFiles/A+B.dir/depend
