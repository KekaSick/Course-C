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
CMAKE_SOURCE_DIR = "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week11/sem_21"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week11/sem_21/build"

# Include any dependencies generated for this target.
include CMakeFiles/ex1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ex1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ex1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex1.dir/flags.make

CMakeFiles/ex1.dir/ex1/main.cpp.o: CMakeFiles/ex1.dir/flags.make
CMakeFiles/ex1.dir/ex1/main.cpp.o: /Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week11/sem_21/ex1/main.cpp
CMakeFiles/ex1.dir/ex1/main.cpp.o: CMakeFiles/ex1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week11/sem_21/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex1.dir/ex1/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ex1.dir/ex1/main.cpp.o -MF CMakeFiles/ex1.dir/ex1/main.cpp.o.d -o CMakeFiles/ex1.dir/ex1/main.cpp.o -c "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week11/sem_21/ex1/main.cpp"

CMakeFiles/ex1.dir/ex1/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ex1.dir/ex1/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week11/sem_21/ex1/main.cpp" > CMakeFiles/ex1.dir/ex1/main.cpp.i

CMakeFiles/ex1.dir/ex1/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ex1.dir/ex1/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week11/sem_21/ex1/main.cpp" -o CMakeFiles/ex1.dir/ex1/main.cpp.s

# Object files for target ex1
ex1_OBJECTS = \
"CMakeFiles/ex1.dir/ex1/main.cpp.o"

# External object files for target ex1
ex1_EXTERNAL_OBJECTS =

ex1: CMakeFiles/ex1.dir/ex1/main.cpp.o
ex1: CMakeFiles/ex1.dir/build.make
ex1: CMakeFiles/ex1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week11/sem_21/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ex1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex1.dir/build: ex1
.PHONY : CMakeFiles/ex1.dir/build

CMakeFiles/ex1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex1.dir/clean

CMakeFiles/ex1.dir/depend:
	cd "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week11/sem_21/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week11/sem_21" "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week11/sem_21" "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week11/sem_21/build" "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week11/sem_21/build" "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week11/sem_21/build/CMakeFiles/ex1.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/ex1.dir/depend

