# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = G:\programmation\Morpino

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = G:\programmation\Morpino\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Morpino.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Morpino.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Morpino.dir/flags.make

CMakeFiles/Morpino.dir/main.cpp.obj: CMakeFiles/Morpino.dir/flags.make
CMakeFiles/Morpino.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=G:\programmation\Morpino\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Morpino.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Morpino.dir\main.cpp.obj -c G:\programmation\Morpino\main.cpp

CMakeFiles/Morpino.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Morpino.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E G:\programmation\Morpino\main.cpp > CMakeFiles\Morpino.dir\main.cpp.i

CMakeFiles/Morpino.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Morpino.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S G:\programmation\Morpino\main.cpp -o CMakeFiles\Morpino.dir\main.cpp.s

# Object files for target Morpino
Morpino_OBJECTS = \
"CMakeFiles/Morpino.dir/main.cpp.obj"

# External object files for target Morpino
Morpino_EXTERNAL_OBJECTS =

Morpino.exe: CMakeFiles/Morpino.dir/main.cpp.obj
Morpino.exe: CMakeFiles/Morpino.dir/build.make
Morpino.exe: CMakeFiles/Morpino.dir/linklibs.rsp
Morpino.exe: CMakeFiles/Morpino.dir/objects1.rsp
Morpino.exe: CMakeFiles/Morpino.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=G:\programmation\Morpino\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Morpino.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Morpino.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Morpino.dir/build: Morpino.exe

.PHONY : CMakeFiles/Morpino.dir/build

CMakeFiles/Morpino.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Morpino.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Morpino.dir/clean

CMakeFiles/Morpino.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" G:\programmation\Morpino G:\programmation\Morpino G:\programmation\Morpino\cmake-build-debug G:\programmation\Morpino\cmake-build-debug G:\programmation\Morpino\cmake-build-debug\CMakeFiles\Morpino.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Morpino.dir/depend

