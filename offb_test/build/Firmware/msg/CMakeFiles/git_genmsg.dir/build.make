# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/jinwoo/offboard_test/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jinwoo/offboard_test/build

# Utility rule file for git_genmsg.

# Include the progress variables for this target.
include Firmware/msg/CMakeFiles/git_genmsg.dir/progress.make

Firmware/msg/CMakeFiles/git_genmsg: Firmware/msg/git_init_tools_genmsg.stamp


Firmware/msg/git_init_tools_genmsg.stamp: /home/jinwoo/offboard_test/src/Firmware/.gitmodules
Firmware/msg/git_init_tools_genmsg.stamp: /home/jinwoo/offboard_test/src/Firmware/msg/tools/genmsg/.git
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jinwoo/offboard_test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "git submodule tools/genmsg"
	cd /home/jinwoo/offboard_test/src/Firmware/msg && bash /home/jinwoo/offboard_test/src/Firmware/Tools/check_submodules.sh tools/genmsg
	cd /home/jinwoo/offboard_test/src/Firmware/msg && cmake -E touch /home/jinwoo/offboard_test/build/Firmware/msg/git_init_tools_genmsg.stamp

git_genmsg: Firmware/msg/CMakeFiles/git_genmsg
git_genmsg: Firmware/msg/git_init_tools_genmsg.stamp
git_genmsg: Firmware/msg/CMakeFiles/git_genmsg.dir/build.make

.PHONY : git_genmsg

# Rule to build all files generated by this target.
Firmware/msg/CMakeFiles/git_genmsg.dir/build: git_genmsg

.PHONY : Firmware/msg/CMakeFiles/git_genmsg.dir/build

Firmware/msg/CMakeFiles/git_genmsg.dir/clean:
	cd /home/jinwoo/offboard_test/build/Firmware/msg && $(CMAKE_COMMAND) -P CMakeFiles/git_genmsg.dir/cmake_clean.cmake
.PHONY : Firmware/msg/CMakeFiles/git_genmsg.dir/clean

Firmware/msg/CMakeFiles/git_genmsg.dir/depend:
	cd /home/jinwoo/offboard_test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jinwoo/offboard_test/src /home/jinwoo/offboard_test/src/Firmware/msg /home/jinwoo/offboard_test/build /home/jinwoo/offboard_test/build/Firmware/msg /home/jinwoo/offboard_test/build/Firmware/msg/CMakeFiles/git_genmsg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Firmware/msg/CMakeFiles/git_genmsg.dir/depend
