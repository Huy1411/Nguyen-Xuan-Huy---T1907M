# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Ex_0208_Bai_5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ex_0208_Bai_5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ex_0208_Bai_5.dir/flags.make

CMakeFiles/Ex_0208_Bai_5.dir/Ex_0208/Bai_5/main.c.o: CMakeFiles/Ex_0208_Bai_5.dir/flags.make
CMakeFiles/Ex_0208_Bai_5.dir/Ex_0208/Bai_5/main.c.o: ../Ex_0208/Bai_5/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Ex_0208_Bai_5.dir/Ex_0208/Bai_5/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Ex_0208_Bai_5.dir/Ex_0208/Bai_5/main.c.o   -c /Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M/Ex_0208/Bai_5/main.c

CMakeFiles/Ex_0208_Bai_5.dir/Ex_0208/Bai_5/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Ex_0208_Bai_5.dir/Ex_0208/Bai_5/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M/Ex_0208/Bai_5/main.c > CMakeFiles/Ex_0208_Bai_5.dir/Ex_0208/Bai_5/main.c.i

CMakeFiles/Ex_0208_Bai_5.dir/Ex_0208/Bai_5/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Ex_0208_Bai_5.dir/Ex_0208/Bai_5/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M/Ex_0208/Bai_5/main.c -o CMakeFiles/Ex_0208_Bai_5.dir/Ex_0208/Bai_5/main.c.s

# Object files for target Ex_0208_Bai_5
Ex_0208_Bai_5_OBJECTS = \
"CMakeFiles/Ex_0208_Bai_5.dir/Ex_0208/Bai_5/main.c.o"

# External object files for target Ex_0208_Bai_5
Ex_0208_Bai_5_EXTERNAL_OBJECTS =

Ex_0208_Bai_5: CMakeFiles/Ex_0208_Bai_5.dir/Ex_0208/Bai_5/main.c.o
Ex_0208_Bai_5: CMakeFiles/Ex_0208_Bai_5.dir/build.make
Ex_0208_Bai_5: CMakeFiles/Ex_0208_Bai_5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Ex_0208_Bai_5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Ex_0208_Bai_5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ex_0208_Bai_5.dir/build: Ex_0208_Bai_5

.PHONY : CMakeFiles/Ex_0208_Bai_5.dir/build

CMakeFiles/Ex_0208_Bai_5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Ex_0208_Bai_5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Ex_0208_Bai_5.dir/clean

CMakeFiles/Ex_0208_Bai_5.dir/depend:
	cd /Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M /Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M /Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M/cmake-build-debug /Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M/cmake-build-debug /Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M/cmake-build-debug/CMakeFiles/Ex_0208_Bai_5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Ex_0208_Bai_5.dir/depend

