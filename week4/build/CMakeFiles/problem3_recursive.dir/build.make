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
CMAKE_BINARY_DIR = "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week4/build"

# Include any dependencies generated for this target.
include CMakeFiles/problem3_recursive.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/problem3_recursive.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/problem3_recursive.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/problem3_recursive.dir/flags.make

CMakeFiles/problem3_recursive.dir/problem3_recursive/main.cpp.o: CMakeFiles/problem3_recursive.dir/flags.make
CMakeFiles/problem3_recursive.dir/problem3_recursive/main.cpp.o: /Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week4/07_08_sem/problem3_recursive/main.cpp
CMakeFiles/problem3_recursive.dir/problem3_recursive/main.cpp.o: CMakeFiles/problem3_recursive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week4/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/problem3_recursive.dir/problem3_recursive/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/problem3_recursive.dir/problem3_recursive/main.cpp.o -MF CMakeFiles/problem3_recursive.dir/problem3_recursive/main.cpp.o.d -o CMakeFiles/problem3_recursive.dir/problem3_recursive/main.cpp.o -c "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week4/07_08_sem/problem3_recursive/main.cpp"

CMakeFiles/problem3_recursive.dir/problem3_recursive/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/problem3_recursive.dir/problem3_recursive/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week4/07_08_sem/problem3_recursive/main.cpp" > CMakeFiles/problem3_recursive.dir/problem3_recursive/main.cpp.i

CMakeFiles/problem3_recursive.dir/problem3_recursive/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/problem3_recursive.dir/problem3_recursive/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week4/07_08_sem/problem3_recursive/main.cpp" -o CMakeFiles/problem3_recursive.dir/problem3_recursive/main.cpp.s

# Object files for target problem3_recursive
problem3_recursive_OBJECTS = \
"CMakeFiles/problem3_recursive.dir/problem3_recursive/main.cpp.o"

# External object files for target problem3_recursive
problem3_recursive_EXTERNAL_OBJECTS =

problem3_recursive: CMakeFiles/problem3_recursive.dir/problem3_recursive/main.cpp.o
problem3_recursive: CMakeFiles/problem3_recursive.dir/build.make
problem3_recursive: CMakeFiles/problem3_recursive.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week4/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable problem3_recursive"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/problem3_recursive.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/problem3_recursive.dir/build: problem3_recursive
.PHONY : CMakeFiles/problem3_recursive.dir/build

CMakeFiles/problem3_recursive.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/problem3_recursive.dir/cmake_clean.cmake
.PHONY : CMakeFiles/problem3_recursive.dir/clean

CMakeFiles/problem3_recursive.dir/depend:
	cd "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week4/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week4/07_08_sem" "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week4/07_08_sem" "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week4/build" "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week4/build" "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week4/build/CMakeFiles/problem3_recursive.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/problem3_recursive.dir/depend

