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
CMAKE_SOURCE_DIR = /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/part-text-into-words

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/part-text-into-words/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/part_text_into_words.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/part_text_into_words.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/part_text_into_words.dir/flags.make

CMakeFiles/part_text_into_words.dir/main.cpp.o: CMakeFiles/part_text_into_words.dir/flags.make
CMakeFiles/part_text_into_words.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/part-text-into-words/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/part_text_into_words.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/part_text_into_words.dir/main.cpp.o -c /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/part-text-into-words/main.cpp

CMakeFiles/part_text_into_words.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/part_text_into_words.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/part-text-into-words/main.cpp > CMakeFiles/part_text_into_words.dir/main.cpp.i

CMakeFiles/part_text_into_words.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/part_text_into_words.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/part-text-into-words/main.cpp -o CMakeFiles/part_text_into_words.dir/main.cpp.s

# Object files for target part_text_into_words
part_text_into_words_OBJECTS = \
"CMakeFiles/part_text_into_words.dir/main.cpp.o"

# External object files for target part_text_into_words
part_text_into_words_EXTERNAL_OBJECTS =

part_text_into_words: CMakeFiles/part_text_into_words.dir/main.cpp.o
part_text_into_words: CMakeFiles/part_text_into_words.dir/build.make
part_text_into_words: CMakeFiles/part_text_into_words.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/part-text-into-words/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable part_text_into_words"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/part_text_into_words.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/part_text_into_words.dir/build: part_text_into_words

.PHONY : CMakeFiles/part_text_into_words.dir/build

CMakeFiles/part_text_into_words.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/part_text_into_words.dir/cmake_clean.cmake
.PHONY : CMakeFiles/part_text_into_words.dir/clean

CMakeFiles/part_text_into_words.dir/depend:
	cd /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/part-text-into-words/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/part-text-into-words /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/part-text-into-words /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/part-text-into-words/cmake-build-debug /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/part-text-into-words/cmake-build-debug /home/maria/projects/github.com/fundamentals-of-algoritmization-and-programming-1/2-nd-sem/part-text-into-words/cmake-build-debug/CMakeFiles/part_text_into_words.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/part_text_into_words.dir/depend

