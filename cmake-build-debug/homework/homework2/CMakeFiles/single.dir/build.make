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
include homework/homework2/CMakeFiles/single.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include homework/homework2/CMakeFiles/single.dir/compiler_depend.make

# Include the progress variables for this target.
include homework/homework2/CMakeFiles/single.dir/progress.make

# Include the compile flags for this target's objects.
include homework/homework2/CMakeFiles/single.dir/flags.make

homework/homework2/CMakeFiles/single.dir/single.c.obj: homework/homework2/CMakeFiles/single.dir/flags.make
homework/homework2/CMakeFiles/single.dir/single.c.obj: E:/git/GitCode/Maxwell/homework/homework2/single.c
homework/homework2/CMakeFiles/single.dir/single.c.obj: homework/homework2/CMakeFiles/single.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\git\GitCode\Maxwell\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object homework/homework2/CMakeFiles/single.dir/single.c.obj"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\homework2 && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT homework/homework2/CMakeFiles/single.dir/single.c.obj -MF CMakeFiles\single.dir\single.c.obj.d -o CMakeFiles\single.dir\single.c.obj -c E:\git\GitCode\Maxwell\homework\homework2\single.c

homework/homework2/CMakeFiles/single.dir/single.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/single.dir/single.c.i"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\homework2 && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\git\GitCode\Maxwell\homework\homework2\single.c > CMakeFiles\single.dir\single.c.i

homework/homework2/CMakeFiles/single.dir/single.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/single.dir/single.c.s"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\homework2 && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\git\GitCode\Maxwell\homework\homework2\single.c -o CMakeFiles\single.dir\single.c.s

# Object files for target single
single_OBJECTS = \
"CMakeFiles/single.dir/single.c.obj"

# External object files for target single
single_EXTERNAL_OBJECTS =

homework/homework2/single.exe: homework/homework2/CMakeFiles/single.dir/single.c.obj
homework/homework2/single.exe: homework/homework2/CMakeFiles/single.dir/build.make
homework/homework2/single.exe: homework/homework2/CMakeFiles/single.dir/linklibs.rsp
homework/homework2/single.exe: homework/homework2/CMakeFiles/single.dir/objects1.rsp
homework/homework2/single.exe: homework/homework2/CMakeFiles/single.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\git\GitCode\Maxwell\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable single.exe"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\homework2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\single.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
homework/homework2/CMakeFiles/single.dir/build: homework/homework2/single.exe
.PHONY : homework/homework2/CMakeFiles/single.dir/build

homework/homework2/CMakeFiles/single.dir/clean:
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\homework2 && $(CMAKE_COMMAND) -P CMakeFiles\single.dir\cmake_clean.cmake
.PHONY : homework/homework2/CMakeFiles/single.dir/clean

homework/homework2/CMakeFiles/single.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\git\GitCode\Maxwell E:\git\GitCode\Maxwell\homework\homework2 E:\git\GitCode\Maxwell\cmake-build-debug E:\git\GitCode\Maxwell\cmake-build-debug\homework\homework2 E:\git\GitCode\Maxwell\cmake-build-debug\homework\homework2\CMakeFiles\single.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : homework/homework2/CMakeFiles/single.dir/depend
