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
include homework/1-homework/CMakeFiles/pi.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include homework/1-homework/CMakeFiles/pi.dir/compiler_depend.make

# Include the progress variables for this target.
include homework/1-homework/CMakeFiles/pi.dir/progress.make

# Include the compile flags for this target's objects.
include homework/1-homework/CMakeFiles/pi.dir/flags.make

homework/1-homework/CMakeFiles/pi.dir/pi.c.obj: homework/1-homework/CMakeFiles/pi.dir/flags.make
homework/1-homework/CMakeFiles/pi.dir/pi.c.obj: E:/git/GitCode/Maxwell/homework/1-homework/pi.c
homework/1-homework/CMakeFiles/pi.dir/pi.c.obj: homework/1-homework/CMakeFiles/pi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\git\GitCode\Maxwell\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object homework/1-homework/CMakeFiles/pi.dir/pi.c.obj"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\1-homework && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT homework/1-homework/CMakeFiles/pi.dir/pi.c.obj -MF CMakeFiles\pi.dir\pi.c.obj.d -o CMakeFiles\pi.dir\pi.c.obj -c E:\git\GitCode\Maxwell\homework\1-homework\pi.c

homework/1-homework/CMakeFiles/pi.dir/pi.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pi.dir/pi.c.i"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\1-homework && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\git\GitCode\Maxwell\homework\1-homework\pi.c > CMakeFiles\pi.dir\pi.c.i

homework/1-homework/CMakeFiles/pi.dir/pi.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pi.dir/pi.c.s"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\1-homework && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\git\GitCode\Maxwell\homework\1-homework\pi.c -o CMakeFiles\pi.dir\pi.c.s

# Object files for target pi
pi_OBJECTS = \
"CMakeFiles/pi.dir/pi.c.obj"

# External object files for target pi
pi_EXTERNAL_OBJECTS =

homework/1-homework/pi.exe: homework/1-homework/CMakeFiles/pi.dir/pi.c.obj
homework/1-homework/pi.exe: homework/1-homework/CMakeFiles/pi.dir/build.make
homework/1-homework/pi.exe: homework/1-homework/CMakeFiles/pi.dir/linklibs.rsp
homework/1-homework/pi.exe: homework/1-homework/CMakeFiles/pi.dir/objects1.rsp
homework/1-homework/pi.exe: homework/1-homework/CMakeFiles/pi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\git\GitCode\Maxwell\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable pi.exe"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\1-homework && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\pi.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
homework/1-homework/CMakeFiles/pi.dir/build: homework/1-homework/pi.exe
.PHONY : homework/1-homework/CMakeFiles/pi.dir/build

homework/1-homework/CMakeFiles/pi.dir/clean:
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\1-homework && $(CMAKE_COMMAND) -P CMakeFiles\pi.dir\cmake_clean.cmake
.PHONY : homework/1-homework/CMakeFiles/pi.dir/clean

homework/1-homework/CMakeFiles/pi.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\git\GitCode\Maxwell E:\git\GitCode\Maxwell\homework\1-homework E:\git\GitCode\Maxwell\cmake-build-debug E:\git\GitCode\Maxwell\cmake-build-debug\homework\1-homework E:\git\GitCode\Maxwell\cmake-build-debug\homework\1-homework\CMakeFiles\pi.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : homework/1-homework/CMakeFiles/pi.dir/depend
