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
include homework/3-homework/CMakeFiles/Quick-sort.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include homework/3-homework/CMakeFiles/Quick-sort.dir/compiler_depend.make

# Include the progress variables for this target.
include homework/3-homework/CMakeFiles/Quick-sort.dir/progress.make

# Include the compile flags for this target's objects.
include homework/3-homework/CMakeFiles/Quick-sort.dir/flags.make

homework/3-homework/CMakeFiles/Quick-sort.dir/Quick-sort.c.obj: homework/3-homework/CMakeFiles/Quick-sort.dir/flags.make
homework/3-homework/CMakeFiles/Quick-sort.dir/Quick-sort.c.obj: E:/git/GitCode/Maxwell/homework/3-homework/Quick-sort.c
homework/3-homework/CMakeFiles/Quick-sort.dir/Quick-sort.c.obj: homework/3-homework/CMakeFiles/Quick-sort.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\git\GitCode\Maxwell\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object homework/3-homework/CMakeFiles/Quick-sort.dir/Quick-sort.c.obj"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\3-homework && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT homework/3-homework/CMakeFiles/Quick-sort.dir/Quick-sort.c.obj -MF CMakeFiles\Quick-sort.dir\Quick-sort.c.obj.d -o CMakeFiles\Quick-sort.dir\Quick-sort.c.obj -c E:\git\GitCode\Maxwell\homework\3-homework\Quick-sort.c

homework/3-homework/CMakeFiles/Quick-sort.dir/Quick-sort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Quick-sort.dir/Quick-sort.c.i"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\3-homework && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\git\GitCode\Maxwell\homework\3-homework\Quick-sort.c > CMakeFiles\Quick-sort.dir\Quick-sort.c.i

homework/3-homework/CMakeFiles/Quick-sort.dir/Quick-sort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Quick-sort.dir/Quick-sort.c.s"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\3-homework && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\git\GitCode\Maxwell\homework\3-homework\Quick-sort.c -o CMakeFiles\Quick-sort.dir\Quick-sort.c.s

# Object files for target Quick-sort
Quick__sort_OBJECTS = \
"CMakeFiles/Quick-sort.dir/Quick-sort.c.obj"

# External object files for target Quick-sort
Quick__sort_EXTERNAL_OBJECTS =

homework/3-homework/Quick-sort.exe: homework/3-homework/CMakeFiles/Quick-sort.dir/Quick-sort.c.obj
homework/3-homework/Quick-sort.exe: homework/3-homework/CMakeFiles/Quick-sort.dir/build.make
homework/3-homework/Quick-sort.exe: homework/3-homework/CMakeFiles/Quick-sort.dir/linklibs.rsp
homework/3-homework/Quick-sort.exe: homework/3-homework/CMakeFiles/Quick-sort.dir/objects1.rsp
homework/3-homework/Quick-sort.exe: homework/3-homework/CMakeFiles/Quick-sort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\git\GitCode\Maxwell\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Quick-sort.exe"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\3-homework && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Quick-sort.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
homework/3-homework/CMakeFiles/Quick-sort.dir/build: homework/3-homework/Quick-sort.exe
.PHONY : homework/3-homework/CMakeFiles/Quick-sort.dir/build

homework/3-homework/CMakeFiles/Quick-sort.dir/clean:
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\3-homework && $(CMAKE_COMMAND) -P CMakeFiles\Quick-sort.dir\cmake_clean.cmake
.PHONY : homework/3-homework/CMakeFiles/Quick-sort.dir/clean

homework/3-homework/CMakeFiles/Quick-sort.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\git\GitCode\Maxwell E:\git\GitCode\Maxwell\homework\3-homework E:\git\GitCode\Maxwell\cmake-build-debug E:\git\GitCode\Maxwell\cmake-build-debug\homework\3-homework E:\git\GitCode\Maxwell\cmake-build-debug\homework\3-homework\CMakeFiles\Quick-sort.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : homework/3-homework/CMakeFiles/Quick-sort.dir/depend
