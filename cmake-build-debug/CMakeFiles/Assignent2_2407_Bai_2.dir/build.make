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
include CMakeFiles/Assignent2_2407_Bai_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Assignent2_2407_Bai_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignent2_2407_Bai_2.dir/flags.make

CMakeFiles/Assignent2_2407_Bai_2.dir/Assignment2_2407/Bai_2/main.c.o: CMakeFiles/Assignent2_2407_Bai_2.dir/flags.make
CMakeFiles/Assignent2_2407_Bai_2.dir/Assignment2_2407/Bai_2/main.c.o: ../Assignment2_2407/Bai_2/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Assignent2_2407_Bai_2.dir/Assignment2_2407/Bai_2/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Assignent2_2407_Bai_2.dir/Assignment2_2407/Bai_2/main.c.o   -c /Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M/Assignment2_2407/Bai_2/main.c

CMakeFiles/Assignent2_2407_Bai_2.dir/Assignment2_2407/Bai_2/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Assignent2_2407_Bai_2.dir/Assignment2_2407/Bai_2/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M/Assignment2_2407/Bai_2/main.c > CMakeFiles/Assignent2_2407_Bai_2.dir/Assignment2_2407/Bai_2/main.c.i

CMakeFiles/Assignent2_2407_Bai_2.dir/Assignment2_2407/Bai_2/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Assignent2_2407_Bai_2.dir/Assignment2_2407/Bai_2/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M/Assignment2_2407/Bai_2/main.c -o CMakeFiles/Assignent2_2407_Bai_2.dir/Assignment2_2407/Bai_2/main.c.s

# Object files for target Assignent2_2407_Bai_2
Assignent2_2407_Bai_2_OBJECTS = \
"CMakeFiles/Assignent2_2407_Bai_2.dir/Assignment2_2407/Bai_2/main.c.o"

# External object files for target Assignent2_2407_Bai_2
Assignent2_2407_Bai_2_EXTERNAL_OBJECTS =

Assignent2_2407_Bai_2: CMakeFiles/Assignent2_2407_Bai_2.dir/Assignment2_2407/Bai_2/main.c.o
Assignent2_2407_Bai_2: CMakeFiles/Assignent2_2407_Bai_2.dir/build.make
Assignent2_2407_Bai_2: CMakeFiles/Assignent2_2407_Bai_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Assignent2_2407_Bai_2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Assignent2_2407_Bai_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignent2_2407_Bai_2.dir/build: Assignent2_2407_Bai_2

.PHONY : CMakeFiles/Assignent2_2407_Bai_2.dir/build

CMakeFiles/Assignent2_2407_Bai_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Assignent2_2407_Bai_2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Assignent2_2407_Bai_2.dir/clean

CMakeFiles/Assignent2_2407_Bai_2.dir/depend:
	cd /Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M /Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M /Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M/cmake-build-debug /Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M/cmake-build-debug /Users/HuyLo/Documents/Nguyen-Xuan-Huy---T1907M/cmake-build-debug/CMakeFiles/Assignent2_2407_Bai_2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Assignent2_2407_Bai_2.dir/depend

