# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/karl/C++/Day.02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/karl/C++/Day.02

# Include any dependencies generated for this target.
include CMakeFiles/IOAccounts.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/IOAccounts.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/IOAccounts.dir/flags.make

CMakeFiles/IOAccounts.dir/IOAccounts.cpp.o: CMakeFiles/IOAccounts.dir/flags.make
CMakeFiles/IOAccounts.dir/IOAccounts.cpp.o: IOAccounts.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/karl/C++/Day.02/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/IOAccounts.dir/IOAccounts.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/IOAccounts.dir/IOAccounts.cpp.o -c /home/karl/C++/Day.02/IOAccounts.cpp

CMakeFiles/IOAccounts.dir/IOAccounts.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IOAccounts.dir/IOAccounts.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/karl/C++/Day.02/IOAccounts.cpp > CMakeFiles/IOAccounts.dir/IOAccounts.cpp.i

CMakeFiles/IOAccounts.dir/IOAccounts.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IOAccounts.dir/IOAccounts.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/karl/C++/Day.02/IOAccounts.cpp -o CMakeFiles/IOAccounts.dir/IOAccounts.cpp.s

CMakeFiles/IOAccounts.dir/IOAccounts.cpp.o.requires:
.PHONY : CMakeFiles/IOAccounts.dir/IOAccounts.cpp.o.requires

CMakeFiles/IOAccounts.dir/IOAccounts.cpp.o.provides: CMakeFiles/IOAccounts.dir/IOAccounts.cpp.o.requires
	$(MAKE) -f CMakeFiles/IOAccounts.dir/build.make CMakeFiles/IOAccounts.dir/IOAccounts.cpp.o.provides.build
.PHONY : CMakeFiles/IOAccounts.dir/IOAccounts.cpp.o.provides

CMakeFiles/IOAccounts.dir/IOAccounts.cpp.o.provides.build: CMakeFiles/IOAccounts.dir/IOAccounts.cpp.o

# Object files for target IOAccounts
IOAccounts_OBJECTS = \
"CMakeFiles/IOAccounts.dir/IOAccounts.cpp.o"

# External object files for target IOAccounts
IOAccounts_EXTERNAL_OBJECTS =

IOAccounts: CMakeFiles/IOAccounts.dir/IOAccounts.cpp.o
IOAccounts: CMakeFiles/IOAccounts.dir/build.make
IOAccounts: CMakeFiles/IOAccounts.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable IOAccounts"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IOAccounts.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/IOAccounts.dir/build: IOAccounts
.PHONY : CMakeFiles/IOAccounts.dir/build

CMakeFiles/IOAccounts.dir/requires: CMakeFiles/IOAccounts.dir/IOAccounts.cpp.o.requires
.PHONY : CMakeFiles/IOAccounts.dir/requires

CMakeFiles/IOAccounts.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/IOAccounts.dir/cmake_clean.cmake
.PHONY : CMakeFiles/IOAccounts.dir/clean

CMakeFiles/IOAccounts.dir/depend:
	cd /home/karl/C++/Day.02 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/karl/C++/Day.02 /home/karl/C++/Day.02 /home/karl/C++/Day.02 /home/karl/C++/Day.02 /home/karl/C++/Day.02/CMakeFiles/IOAccounts.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/IOAccounts.dir/depend

