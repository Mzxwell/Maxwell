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
include homework/7_homework/CMakeFiles/pour.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include homework/7_homework/CMakeFiles/pour.dir/compiler_depend.make

# Include the progress variables for this target.
include homework/7_homework/CMakeFiles/pour.dir/progress.make

# Include the compile flags for this target's objects.
include homework/7_homework/CMakeFiles/pour.dir/flags.make

homework/7_homework/CMakeFiles/pour.dir/pour.c.obj: homework/7_homework/CMakeFiles/pour.dir/flags.make
homework/7_homework/CMakeFiles/pour.dir/pour.c.obj: E:/git/GitCode/Maxwell/homework/7_homework/pour.c
homework/7_homework/CMakeFiles/pour.dir/pour.c.obj: homework/7_homework/CMakeFiles/pour.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\git\GitCode\Maxwell\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object homework/7_homework/CMakeFiles/pour.dir/pour.c.obj"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\7_homework && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT homework/7_homework/CMakeFiles/pour.dir/pour.c.obj -MF CMakeFiles\pour.dir\pour.c.obj.d -o CMakeFiles\pour.dir\pour.c.obj -c E:\git\GitCode\Maxwell\homework\7_homework\pour.c

homework/7_homework/CMakeFiles/pour.dir/pour.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pour.dir/pour.c.i"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\7_homework && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\git\GitCode\Maxwell\homework\7_homework\pour.c > CMakeFiles\pour.dir\pour.c.i

homework/7_homework/CMakeFiles/pour.dir/pour.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pour.dir/pour.c.s"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\7_homework && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\git\GitCode\Maxwell\homework\7_homework\pour.c -o CMakeFiles\pour.dir\pour.c.s

# Object files for target pour
pour_OBJECTS = \
"CMakeFiles/pour.dir/pour.c.obj"

# External object files for target pour
pour_EXTERNAL_OBJECTS =

homework/7_homework/pour.exe: homework/7_homework/CMakeFiles/pour.dir/pour.c.obj
homework/7_homework/pour.exe: homework/7_homework/CMakeFiles/pour.dir/build.make
homework/7_homework/pour.exe: homework/7_homework/CMakeFiles/pour.dir/linklibs.rsp
homework/7_homework/pour.exe: homework/7_homework/CMakeFiles/pour.dir/objects1.rsp
homework/7_homework/pour.exe: homework/7_homework/CMakeFiles/pour.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\git\GitCode\Maxwell\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable pour.exe"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\7_homework && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\pour.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
homework/7_homework/CMakeFiles/pour.dir/build: homework/7_homework/pour.exe
.PHONY : homework/7_homework/CMakeFiles/pour.dir/build

homework/7_homework/CMakeFiles/pour.dir/clean:
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\7_homework && $(CMAKE_COMMAND) -P CMakeFiles\pour.dir\cmake_clean.cmake
.PHONY : homework/7_homework/CMakeFiles/pour.dir/clean

homework/7_homework/CMakeFiles/pour.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\git\GitCode\Maxwell E:\git\GitCode\Maxwell\homework\7_homework E:\git\GitCode\Maxwell\cmake-build-debug E:\git\GitCode\Maxwell\cmake-build-debug\homework\7_homework E:\git\GitCode\Maxwell\cmake-build-debug\homework\7_homework\CMakeFiles\pour.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : homework/7_homework/CMakeFiles/pour.dir/depend

