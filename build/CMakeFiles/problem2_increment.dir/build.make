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
CMAKE_SOURCE_DIR = "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week4/07_08_sem"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/build"

# Include any dependencies generated for this target.
include CMakeFiles/problem2_increment.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/problem2_increment.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/problem2_increment.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/problem2_increment.dir/flags.make

CMakeFiles/problem2_increment.dir/problem2_increment/main.cpp.o: CMakeFiles/problem2_increment.dir/flags.make
CMakeFiles/problem2_increment.dir/problem2_increment/main.cpp.o: /Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week4/07_08_sem/problem2_increment/main.cpp
CMakeFiles/problem2_increment.dir/problem2_increment/main.cpp.o: CMakeFiles/problem2_increment.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/problem2_increment.dir/problem2_increment/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/problem2_increment.dir/problem2_increment/main.cpp.o -MF CMakeFiles/problem2_increment.dir/problem2_increment/main.cpp.o.d -o CMakeFiles/problem2_increment.dir/problem2_increment/main.cpp.o -c "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week4/07_08_sem/problem2_increment/main.cpp"

CMakeFiles/problem2_increment.dir/problem2_increment/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/problem2_increment.dir/problem2_increment/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week4/07_08_sem/problem2_increment/main.cpp" > CMakeFiles/problem2_increment.dir/problem2_increment/main.cpp.i

CMakeFiles/problem2_increment.dir/problem2_increment/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/problem2_increment.dir/problem2_increment/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week4/07_08_sem/problem2_increment/main.cpp" -o CMakeFiles/problem2_increment.dir/problem2_increment/main.cpp.s

# Object files for target problem2_increment
problem2_increment_OBJECTS = \
"CMakeFiles/problem2_increment.dir/problem2_increment/main.cpp.o"

# External object files for target problem2_increment
problem2_increment_EXTERNAL_OBJECTS =

problem2_increment: CMakeFiles/problem2_increment.dir/problem2_increment/main.cpp.o
problem2_increment: CMakeFiles/problem2_increment.dir/build.make
problem2_increment: CMakeFiles/problem2_increment.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable problem2_increment"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/problem2_increment.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/problem2_increment.dir/build: problem2_increment
.PHONY : CMakeFiles/problem2_increment.dir/build

CMakeFiles/problem2_increment.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/problem2_increment.dir/cmake_clean.cmake
.PHONY : CMakeFiles/problem2_increment.dir/clean

CMakeFiles/problem2_increment.dir/depend:
	cd "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week4/07_08_sem" "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week4/07_08_sem" "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/build" "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/build" "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/build/CMakeFiles/problem2_increment.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/problem2_increment.dir/depend

