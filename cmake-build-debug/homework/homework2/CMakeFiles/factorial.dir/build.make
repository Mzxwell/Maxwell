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
include homework/homework2/CMakeFiles/factorial.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include homework/homework2/CMakeFiles/factorial.dir/compiler_depend.make

# Include the progress variables for this target.
include homework/homework2/CMakeFiles/factorial.dir/progress.make

# Include the compile flags for this target's objects.
include homework/homework2/CMakeFiles/factorial.dir/flags.make

homework/homework2/CMakeFiles/factorial.dir/factorial.c.obj: homework/homework2/CMakeFiles/factorial.dir/flags.make
homework/homework2/CMakeFiles/factorial.dir/factorial.c.obj: ../homework/homework2/factorial.c
homework/homework2/CMakeFiles/factorial.dir/factorial.c.obj: homework/homework2/CMakeFiles/factorial.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\CPL\untitled\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object homework/homework2/CMakeFiles/factorial.dir/factorial.c.obj"
	cd /d C:\CPL\untitled\cmake-build-debug\homework\homework2 && C:\CPL\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT homework/homework2/CMakeFiles/factorial.dir/factorial.c.obj -MF CMakeFiles\factorial.dir\factorial.c.obj.d -o CMakeFiles\factorial.dir\factorial.c.obj -c C:\CPL\untitled\homework\homework2\factorial.c

homework/homework2/CMakeFiles/factorial.dir/factorial.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/factorial.dir/factorial.c.i"
	cd /d C:\CPL\untitled\cmake-build-debug\homework\homework2 && C:\CPL\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\CPL\untitled\homework\homework2\factorial.c > CMakeFiles\factorial.dir\factorial.c.i

homework/homework2/CMakeFiles/factorial.dir/factorial.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/factorial.dir/factorial.c.s"
	cd /d C:\CPL\untitled\cmake-build-debug\homework\homework2 && C:\CPL\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\CPL\untitled\homework\homework2\factorial.c -o CMakeFiles\factorial.dir\factorial.c.s

# Object files for target factorial
factorial_OBJECTS = \
"CMakeFiles/factorial.dir/factorial.c.obj"

# External object files for target factorial
factorial_EXTERNAL_OBJECTS =

homework/homework2/factorial.exe: homework/homework2/CMakeFiles/factorial.dir/factorial.c.obj
homework/homework2/factorial.exe: homework/homework2/CMakeFiles/factorial.dir/build.make
homework/homework2/factorial.exe: homework/homework2/CMakeFiles/factorial.dir/linklibs.rsp
homework/homework2/factorial.exe: homework/homework2/CMakeFiles/factorial.dir/objects1.rsp
homework/homework2/factorial.exe: homework/homework2/CMakeFiles/factorial.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\CPL\untitled\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable factorial.exe"
	cd /d C:\CPL\untitled\cmake-build-debug\homework\homework2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\factorial.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
homework/homework2/CMakeFiles/factorial.dir/build: homework/homework2/factorial.exe
.PHONY : homework/homework2/CMakeFiles/factorial.dir/build

homework/homework2/CMakeFiles/factorial.dir/clean:
	cd /d C:\CPL\untitled\cmake-build-debug\homework\homework2 && $(CMAKE_COMMAND) -P CMakeFiles\factorial.dir\cmake_clean.cmake
.PHONY : homework/homework2/CMakeFiles/factorial.dir/clean

homework/homework2/CMakeFiles/factorial.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\CPL\untitled C:\CPL\untitled\homework\homework2 C:\CPL\untitled\cmake-build-debug C:\CPL\untitled\cmake-build-debug\homework\homework2 C:\CPL\untitled\cmake-build-debug\homework\homework2\CMakeFiles\factorial.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : homework/homework2/CMakeFiles/factorial.dir/depend

