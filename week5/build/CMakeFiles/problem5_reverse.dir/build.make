# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/build"

# Include any dependencies generated for this target.
include CMakeFiles/problem5_reverse.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/problem5_reverse.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/problem5_reverse.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/problem5_reverse.dir/flags.make

CMakeFiles/problem5_reverse.dir/problem5_reverse/main.cpp.o: CMakeFiles/problem5_reverse.dir/flags.make
CMakeFiles/problem5_reverse.dir/problem5_reverse/main.cpp.o: /Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem5_reverse/main.cpp
CMakeFiles/problem5_reverse.dir/problem5_reverse/main.cpp.o: CMakeFiles/problem5_reverse.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/problem5_reverse.dir/problem5_reverse/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/problem5_reverse.dir/problem5_reverse/main.cpp.o -MF CMakeFiles/problem5_reverse.dir/problem5_reverse/main.cpp.o.d -o CMakeFiles/problem5_reverse.dir/problem5_reverse/main.cpp.o -c "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem5_reverse/main.cpp"

CMakeFiles/problem5_reverse.dir/problem5_reverse/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/problem5_reverse.dir/problem5_reverse/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem5_reverse/main.cpp" > CMakeFiles/problem5_reverse.dir/problem5_reverse/main.cpp.i

CMakeFiles/problem5_reverse.dir/problem5_reverse/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/problem5_reverse.dir/problem5_reverse/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem5_reverse/main.cpp" -o CMakeFiles/problem5_reverse.dir/problem5_reverse/main.cpp.s

# Object files for target problem5_reverse
problem5_reverse_OBJECTS = \
"CMakeFiles/problem5_reverse.dir/problem5_reverse/main.cpp.o"

# External object files for target problem5_reverse
problem5_reverse_EXTERNAL_OBJECTS =

problem5_reverse: CMakeFiles/problem5_reverse.dir/problem5_reverse/main.cpp.o
problem5_reverse: CMakeFiles/problem5_reverse.dir/build.make
problem5_reverse: CMakeFiles/problem5_reverse.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable problem5_reverse"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/problem5_reverse.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/problem5_reverse.dir/build: problem5_reverse
.PHONY : CMakeFiles/problem5_reverse.dir/build

CMakeFiles/problem5_reverse.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/problem5_reverse.dir/cmake_clean.cmake
.PHONY : CMakeFiles/problem5_reverse.dir/clean

CMakeFiles/problem5_reverse.dir/depend:
	cd "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem" "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem" "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/build" "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/build" "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/build/CMakeFiles/problem5_reverse.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/problem5_reverse.dir/depend

