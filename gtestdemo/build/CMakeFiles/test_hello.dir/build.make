# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/hgfs/share/github/gtestdemo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/hgfs/share/github/gtestdemo/build

# Include any dependencies generated for this target.
include CMakeFiles/test_hello.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_hello.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_hello.dir/flags.make

CMakeFiles/test_hello.dir/hello_test.cc.o: CMakeFiles/test_hello.dir/flags.make
CMakeFiles/test_hello.dir/hello_test.cc.o: ../hello_test.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/hgfs/share/github/gtestdemo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_hello.dir/hello_test.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_hello.dir/hello_test.cc.o -c /mnt/hgfs/share/github/gtestdemo/hello_test.cc

CMakeFiles/test_hello.dir/hello_test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_hello.dir/hello_test.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/hgfs/share/github/gtestdemo/hello_test.cc > CMakeFiles/test_hello.dir/hello_test.cc.i

CMakeFiles/test_hello.dir/hello_test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_hello.dir/hello_test.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/hgfs/share/github/gtestdemo/hello_test.cc -o CMakeFiles/test_hello.dir/hello_test.cc.s

# Object files for target test_hello
test_hello_OBJECTS = \
"CMakeFiles/test_hello.dir/hello_test.cc.o"

# External object files for target test_hello
test_hello_EXTERNAL_OBJECTS =

test_hello: CMakeFiles/test_hello.dir/hello_test.cc.o
test_hello: CMakeFiles/test_hello.dir/build.make
test_hello: lib/libgtest.a
test_hello: lib/libgtest_main.a
test_hello: lib/libgtest.a
test_hello: CMakeFiles/test_hello.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/hgfs/share/github/gtestdemo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_hello"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_hello.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_hello.dir/build: test_hello

.PHONY : CMakeFiles/test_hello.dir/build

CMakeFiles/test_hello.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_hello.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_hello.dir/clean

CMakeFiles/test_hello.dir/depend:
	cd /mnt/hgfs/share/github/gtestdemo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/hgfs/share/github/gtestdemo /mnt/hgfs/share/github/gtestdemo /mnt/hgfs/share/github/gtestdemo/build /mnt/hgfs/share/github/gtestdemo/build /mnt/hgfs/share/github/gtestdemo/build/CMakeFiles/test_hello.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_hello.dir/depend

