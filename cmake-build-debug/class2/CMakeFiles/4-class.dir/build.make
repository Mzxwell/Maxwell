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
include class2/CMakeFiles/4-class.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include class2/CMakeFiles/4-class.dir/compiler_depend.make

# Include the progress variables for this target.
include class2/CMakeFiles/4-class.dir/progress.make

# Include the compile flags for this target's objects.
include class2/CMakeFiles/4-class.dir/flags.make

class2/CMakeFiles/4-class.dir/4-class.c.obj: class2/CMakeFiles/4-class.dir/flags.make
class2/CMakeFiles/4-class.dir/4-class.c.obj: E:/git/GitCode/Maxwell/class2/4-class.c
class2/CMakeFiles/4-class.dir/4-class.c.obj: class2/CMakeFiles/4-class.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\git\GitCode\Maxwell\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object class2/CMakeFiles/4-class.dir/4-class.c.obj"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\class2 && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT class2/CMakeFiles/4-class.dir/4-class.c.obj -MF CMakeFiles\4-class.dir\4-class.c.obj.d -o CMakeFiles\4-class.dir\4-class.c.obj -c E:\git\GitCode\Maxwell\class2\4-class.c

class2/CMakeFiles/4-class.dir/4-class.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/4-class.dir/4-class.c.i"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\class2 && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\git\GitCode\Maxwell\class2\4-class.c > CMakeFiles\4-class.dir\4-class.c.i

class2/CMakeFiles/4-class.dir/4-class.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/4-class.dir/4-class.c.s"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\class2 && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\git\GitCode\Maxwell\class2\4-class.c -o CMakeFiles\4-class.dir\4-class.c.s

# Object files for target 4-class
4__class_OBJECTS = \
"CMakeFiles/4-class.dir/4-class.c.obj"

# External object files for target 4-class
4__class_EXTERNAL_OBJECTS =

class2/4-class.exe: class2/CMakeFiles/4-class.dir/4-class.c.obj
class2/4-class.exe: class2/CMakeFiles/4-class.dir/build.make
class2/4-class.exe: class2/CMakeFiles/4-class.dir/linklibs.rsp
class2/4-class.exe: class2/CMakeFiles/4-class.dir/objects1.rsp
class2/4-class.exe: class2/CMakeFiles/4-class.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\git\GitCode\Maxwell\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 4-class.exe"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\class2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\4-class.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
class2/CMakeFiles/4-class.dir/build: class2/4-class.exe
.PHONY : class2/CMakeFiles/4-class.dir/build

class2/CMakeFiles/4-class.dir/clean:
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\class2 && $(CMAKE_COMMAND) -P CMakeFiles\4-class.dir\cmake_clean.cmake
.PHONY : class2/CMakeFiles/4-class.dir/clean

class2/CMakeFiles/4-class.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\git\GitCode\Maxwell E:\git\GitCode\Maxwell\class2 E:\git\GitCode\Maxwell\cmake-build-debug E:\git\GitCode\Maxwell\cmake-build-debug\class2 E:\git\GitCode\Maxwell\cmake-build-debug\class2\CMakeFiles\4-class.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : class2/CMakeFiles/4-class.dir/depend

