# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /opt/clion-2018.2.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.2.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/trees

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/trees/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/trees.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/trees.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/trees.dir/flags.make

CMakeFiles/trees.dir/main.cpp.o: CMakeFiles/trees.dir/flags.make
CMakeFiles/trees.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/trees/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/trees.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trees.dir/main.cpp.o -c /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/trees/main.cpp

CMakeFiles/trees.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trees.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/trees/main.cpp > CMakeFiles/trees.dir/main.cpp.i

CMakeFiles/trees.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trees.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/trees/main.cpp -o CMakeFiles/trees.dir/main.cpp.s

# Object files for target trees
trees_OBJECTS = \
"CMakeFiles/trees.dir/main.cpp.o"

# External object files for target trees
trees_EXTERNAL_OBJECTS =

trees: CMakeFiles/trees.dir/main.cpp.o
trees: CMakeFiles/trees.dir/build.make
trees: CMakeFiles/trees.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/trees/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable trees"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/trees.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/trees.dir/build: trees

.PHONY : CMakeFiles/trees.dir/build

CMakeFiles/trees.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/trees.dir/cmake_clean.cmake
.PHONY : CMakeFiles/trees.dir/clean

CMakeFiles/trees.dir/depend:
	cd /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/trees/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/trees /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/trees /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/trees/cmake-build-debug /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/trees/cmake-build-debug /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/trees/cmake-build-debug/CMakeFiles/trees.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/trees.dir/depend

