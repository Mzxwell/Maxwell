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
include homework/9_homework/CMakeFiles/tokenizer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include homework/9_homework/CMakeFiles/tokenizer.dir/compiler_depend.make

# Include the progress variables for this target.
include homework/9_homework/CMakeFiles/tokenizer.dir/progress.make

# Include the compile flags for this target's objects.
include homework/9_homework/CMakeFiles/tokenizer.dir/flags.make

homework/9_homework/CMakeFiles/tokenizer.dir/tokenizer.c.obj: homework/9_homework/CMakeFiles/tokenizer.dir/flags.make
homework/9_homework/CMakeFiles/tokenizer.dir/tokenizer.c.obj: E:/git/GitCode/Maxwell/homework/9_homework/tokenizer.c
homework/9_homework/CMakeFiles/tokenizer.dir/tokenizer.c.obj: homework/9_homework/CMakeFiles/tokenizer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\git\GitCode\Maxwell\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object homework/9_homework/CMakeFiles/tokenizer.dir/tokenizer.c.obj"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\9_homework && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT homework/9_homework/CMakeFiles/tokenizer.dir/tokenizer.c.obj -MF CMakeFiles\tokenizer.dir\tokenizer.c.obj.d -o CMakeFiles\tokenizer.dir\tokenizer.c.obj -c E:\git\GitCode\Maxwell\homework\9_homework\tokenizer.c

homework/9_homework/CMakeFiles/tokenizer.dir/tokenizer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tokenizer.dir/tokenizer.c.i"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\9_homework && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\git\GitCode\Maxwell\homework\9_homework\tokenizer.c > CMakeFiles\tokenizer.dir\tokenizer.c.i

homework/9_homework/CMakeFiles/tokenizer.dir/tokenizer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tokenizer.dir/tokenizer.c.s"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\9_homework && C:\Users\Administrator\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8214.51\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\git\GitCode\Maxwell\homework\9_homework\tokenizer.c -o CMakeFiles\tokenizer.dir\tokenizer.c.s

# Object files for target tokenizer
tokenizer_OBJECTS = \
"CMakeFiles/tokenizer.dir/tokenizer.c.obj"

# External object files for target tokenizer
tokenizer_EXTERNAL_OBJECTS =

homework/9_homework/tokenizer.exe: homework/9_homework/CMakeFiles/tokenizer.dir/tokenizer.c.obj
homework/9_homework/tokenizer.exe: homework/9_homework/CMakeFiles/tokenizer.dir/build.make
homework/9_homework/tokenizer.exe: homework/9_homework/CMakeFiles/tokenizer.dir/linklibs.rsp
homework/9_homework/tokenizer.exe: homework/9_homework/CMakeFiles/tokenizer.dir/objects1.rsp
homework/9_homework/tokenizer.exe: homework/9_homework/CMakeFiles/tokenizer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\git\GitCode\Maxwell\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable tokenizer.exe"
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\9_homework && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\tokenizer.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
homework/9_homework/CMakeFiles/tokenizer.dir/build: homework/9_homework/tokenizer.exe
.PHONY : homework/9_homework/CMakeFiles/tokenizer.dir/build

homework/9_homework/CMakeFiles/tokenizer.dir/clean:
	cd /d E:\git\GitCode\Maxwell\cmake-build-debug\homework\9_homework && $(CMAKE_COMMAND) -P CMakeFiles\tokenizer.dir\cmake_clean.cmake
.PHONY : homework/9_homework/CMakeFiles/tokenizer.dir/clean

homework/9_homework/CMakeFiles/tokenizer.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\git\GitCode\Maxwell E:\git\GitCode\Maxwell\homework\9_homework E:\git\GitCode\Maxwell\cmake-build-debug E:\git\GitCode\Maxwell\cmake-build-debug\homework\9_homework E:\git\GitCode\Maxwell\cmake-build-debug\homework\9_homework\CMakeFiles\tokenizer.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : homework/9_homework/CMakeFiles/tokenizer.dir/depend

