# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nils/Desktop/oblig3_ws/src/ros2-examples-ads/ADS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nils/Desktop/oblig3_ws/build/ads

# Include any dependencies generated for this target.
include example/CMakeFiles/example.bin.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include example/CMakeFiles/example.bin.dir/compiler_depend.make

# Include the progress variables for this target.
include example/CMakeFiles/example.bin.dir/progress.make

# Include the compile flags for this target's objects.
include example/CMakeFiles/example.bin.dir/flags.make

example/CMakeFiles/example.bin.dir/example.cpp.o: example/CMakeFiles/example.bin.dir/flags.make
example/CMakeFiles/example.bin.dir/example.cpp.o: /home/nils/Desktop/oblig3_ws/src/ros2-examples-ads/ADS/example/example.cpp
example/CMakeFiles/example.bin.dir/example.cpp.o: example/CMakeFiles/example.bin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nils/Desktop/oblig3_ws/build/ads/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object example/CMakeFiles/example.bin.dir/example.cpp.o"
	cd /home/nils/Desktop/oblig3_ws/build/ads/example && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT example/CMakeFiles/example.bin.dir/example.cpp.o -MF CMakeFiles/example.bin.dir/example.cpp.o.d -o CMakeFiles/example.bin.dir/example.cpp.o -c /home/nils/Desktop/oblig3_ws/src/ros2-examples-ads/ADS/example/example.cpp

example/CMakeFiles/example.bin.dir/example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example.bin.dir/example.cpp.i"
	cd /home/nils/Desktop/oblig3_ws/build/ads/example && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nils/Desktop/oblig3_ws/src/ros2-examples-ads/ADS/example/example.cpp > CMakeFiles/example.bin.dir/example.cpp.i

example/CMakeFiles/example.bin.dir/example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example.bin.dir/example.cpp.s"
	cd /home/nils/Desktop/oblig3_ws/build/ads/example && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nils/Desktop/oblig3_ws/src/ros2-examples-ads/ADS/example/example.cpp -o CMakeFiles/example.bin.dir/example.cpp.s

# Object files for target example.bin
example_bin_OBJECTS = \
"CMakeFiles/example.bin.dir/example.cpp.o"

# External object files for target example.bin
example_bin_EXTERNAL_OBJECTS =

example/example.bin: example/CMakeFiles/example.bin.dir/example.cpp.o
example/example.bin: example/CMakeFiles/example.bin.dir/build.make
example/example.bin: AdsLib/libads.so
example/example.bin: example/CMakeFiles/example.bin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nils/Desktop/oblig3_ws/build/ads/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable example.bin"
	cd /home/nils/Desktop/oblig3_ws/build/ads/example && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example.bin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
example/CMakeFiles/example.bin.dir/build: example/example.bin
.PHONY : example/CMakeFiles/example.bin.dir/build

example/CMakeFiles/example.bin.dir/clean:
	cd /home/nils/Desktop/oblig3_ws/build/ads/example && $(CMAKE_COMMAND) -P CMakeFiles/example.bin.dir/cmake_clean.cmake
.PHONY : example/CMakeFiles/example.bin.dir/clean

example/CMakeFiles/example.bin.dir/depend:
	cd /home/nils/Desktop/oblig3_ws/build/ads && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nils/Desktop/oblig3_ws/src/ros2-examples-ads/ADS /home/nils/Desktop/oblig3_ws/src/ros2-examples-ads/ADS/example /home/nils/Desktop/oblig3_ws/build/ads /home/nils/Desktop/oblig3_ws/build/ads/example /home/nils/Desktop/oblig3_ws/build/ads/example/CMakeFiles/example.bin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : example/CMakeFiles/example.bin.dir/depend

