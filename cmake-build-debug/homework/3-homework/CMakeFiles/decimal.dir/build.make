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
include homework/3-homework/CMakeFiles/decimal.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include homework/3-homework/CMakeFiles/decimal.dir/compiler_depend.make

# Include the progress variables for this target.
include homework/3-homework/CMakeFiles/decimal.dir/progress.make

# Include the compile flags for this target's objects.
include homework/3-homework/CMakeFiles/decimal.dir/flags.make

homework/3-homework/CMakeFiles/decimal.dir/decimal.c.obj: homework/3-homework/CMakeFiles/decimal.dir/flags.make
homework/3-homework/CMakeFiles/decimal.dir/decimal.c.obj: ../homework/3-homework/decimal.c
homework/3-homework/CMakeFiles/decimal.dir/decimal.c.obj: homework/3-homework/CMakeFiles/decimal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\CPL\untitled\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object homework/3-homework/CMakeFiles/decimal.dir/decimal.c.obj"
	cd /d C:\CPL\untitled\cmake-build-debug\homework\3-homework && C:\CPL\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT homework/3-homework/CMakeFiles/decimal.dir/decimal.c.obj -MF CMakeFiles\decimal.dir\decimal.c.obj.d -o CMakeFiles\decimal.dir\decimal.c.obj -c C:\CPL\untitled\homework\3-homework\decimal.c

homework/3-homework/CMakeFiles/decimal.dir/decimal.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/decimal.dir/decimal.c.i"
	cd /d C:\CPL\untitled\cmake-build-debug\homework\3-homework && C:\CPL\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\CPL\untitled\homework\3-homework\decimal.c > CMakeFiles\decimal.dir\decimal.c.i

homework/3-homework/CMakeFiles/decimal.dir/decimal.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/decimal.dir/decimal.c.s"
	cd /d C:\CPL\untitled\cmake-build-debug\homework\3-homework && C:\CPL\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\CPL\untitled\homework\3-homework\decimal.c -o CMakeFiles\decimal.dir\decimal.c.s

# Object files for target decimal
decimal_OBJECTS = \
"CMakeFiles/decimal.dir/decimal.c.obj"

# External object files for target decimal
decimal_EXTERNAL_OBJECTS =

homework/3-homework/decimal.exe: homework/3-homework/CMakeFiles/decimal.dir/decimal.c.obj
homework/3-homework/decimal.exe: homework/3-homework/CMakeFiles/decimal.dir/build.make
homework/3-homework/decimal.exe: homework/3-homework/CMakeFiles/decimal.dir/linklibs.rsp
homework/3-homework/decimal.exe: homework/3-homework/CMakeFiles/decimal.dir/objects1.rsp
homework/3-homework/decimal.exe: homework/3-homework/CMakeFiles/decimal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\CPL\untitled\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable decimal.exe"
	cd /d C:\CPL\untitled\cmake-build-debug\homework\3-homework && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\decimal.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
homework/3-homework/CMakeFiles/decimal.dir/build: homework/3-homework/decimal.exe
.PHONY : homework/3-homework/CMakeFiles/decimal.dir/build

homework/3-homework/CMakeFiles/decimal.dir/clean:
	cd /d C:\CPL\untitled\cmake-build-debug\homework\3-homework && $(CMAKE_COMMAND) -P CMakeFiles\decimal.dir\cmake_clean.cmake
.PHONY : homework/3-homework/CMakeFiles/decimal.dir/clean

homework/3-homework/CMakeFiles/decimal.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\CPL\untitled C:\CPL\untitled\homework\3-homework C:\CPL\untitled\cmake-build-debug C:\CPL\untitled\cmake-build-debug\homework\3-homework C:\CPL\untitled\cmake-build-debug\homework\3-homework\CMakeFiles\decimal.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : homework/3-homework/CMakeFiles/decimal.dir/depend

