# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/169/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/169/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/benjamim/Desktop/estudar pi/ficha2-novo"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/benjamim/Desktop/estudar pi/ficha2-novo/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/ficha2_novo.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ficha2_novo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ficha2_novo.dir/flags.make

CMakeFiles/ficha2_novo.dir/main.c.o: CMakeFiles/ficha2_novo.dir/flags.make
CMakeFiles/ficha2_novo.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/benjamim/Desktop/estudar pi/ficha2-novo/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ficha2_novo.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ficha2_novo.dir/main.c.o -c "/home/benjamim/Desktop/estudar pi/ficha2-novo/main.c"

CMakeFiles/ficha2_novo.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ficha2_novo.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/benjamim/Desktop/estudar pi/ficha2-novo/main.c" > CMakeFiles/ficha2_novo.dir/main.c.i

CMakeFiles/ficha2_novo.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ficha2_novo.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/benjamim/Desktop/estudar pi/ficha2-novo/main.c" -o CMakeFiles/ficha2_novo.dir/main.c.s

# Object files for target ficha2_novo
ficha2_novo_OBJECTS = \
"CMakeFiles/ficha2_novo.dir/main.c.o"

# External object files for target ficha2_novo
ficha2_novo_EXTERNAL_OBJECTS =

ficha2_novo: CMakeFiles/ficha2_novo.dir/main.c.o
ficha2_novo: CMakeFiles/ficha2_novo.dir/build.make
ficha2_novo: CMakeFiles/ficha2_novo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/benjamim/Desktop/estudar pi/ficha2-novo/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ficha2_novo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ficha2_novo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ficha2_novo.dir/build: ficha2_novo
.PHONY : CMakeFiles/ficha2_novo.dir/build

CMakeFiles/ficha2_novo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ficha2_novo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ficha2_novo.dir/clean

CMakeFiles/ficha2_novo.dir/depend:
	cd "/home/benjamim/Desktop/estudar pi/ficha2-novo/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/benjamim/Desktop/estudar pi/ficha2-novo" "/home/benjamim/Desktop/estudar pi/ficha2-novo" "/home/benjamim/Desktop/estudar pi/ficha2-novo/cmake-build-debug" "/home/benjamim/Desktop/estudar pi/ficha2-novo/cmake-build-debug" "/home/benjamim/Desktop/estudar pi/ficha2-novo/cmake-build-debug/CMakeFiles/ficha2_novo.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ficha2_novo.dir/depend

