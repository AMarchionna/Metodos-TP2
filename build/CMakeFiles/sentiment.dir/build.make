# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home2/clinux01/Downloads

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home2/clinux01/Downloads/build

# Include any dependencies generated for this target.
include CMakeFiles/sentiment.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sentiment.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sentiment.dir/flags.make

CMakeFiles/sentiment.dir/src/sentiment.cpp.o: CMakeFiles/sentiment.dir/flags.make
CMakeFiles/sentiment.dir/src/sentiment.cpp.o: ../src/sentiment.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home2/clinux01/Downloads/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sentiment.dir/src/sentiment.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sentiment.dir/src/sentiment.cpp.o -c /home2/clinux01/Downloads/src/sentiment.cpp

CMakeFiles/sentiment.dir/src/sentiment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sentiment.dir/src/sentiment.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home2/clinux01/Downloads/src/sentiment.cpp > CMakeFiles/sentiment.dir/src/sentiment.cpp.i

CMakeFiles/sentiment.dir/src/sentiment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sentiment.dir/src/sentiment.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home2/clinux01/Downloads/src/sentiment.cpp -o CMakeFiles/sentiment.dir/src/sentiment.cpp.s

CMakeFiles/sentiment.dir/src/sentiment.cpp.o.requires:

.PHONY : CMakeFiles/sentiment.dir/src/sentiment.cpp.o.requires

CMakeFiles/sentiment.dir/src/sentiment.cpp.o.provides: CMakeFiles/sentiment.dir/src/sentiment.cpp.o.requires
	$(MAKE) -f CMakeFiles/sentiment.dir/build.make CMakeFiles/sentiment.dir/src/sentiment.cpp.o.provides.build
.PHONY : CMakeFiles/sentiment.dir/src/sentiment.cpp.o.provides

CMakeFiles/sentiment.dir/src/sentiment.cpp.o.provides.build: CMakeFiles/sentiment.dir/src/sentiment.cpp.o


CMakeFiles/sentiment.dir/src/knn.cpp.o: CMakeFiles/sentiment.dir/flags.make
CMakeFiles/sentiment.dir/src/knn.cpp.o: ../src/knn.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home2/clinux01/Downloads/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sentiment.dir/src/knn.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sentiment.dir/src/knn.cpp.o -c /home2/clinux01/Downloads/src/knn.cpp

CMakeFiles/sentiment.dir/src/knn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sentiment.dir/src/knn.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home2/clinux01/Downloads/src/knn.cpp > CMakeFiles/sentiment.dir/src/knn.cpp.i

CMakeFiles/sentiment.dir/src/knn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sentiment.dir/src/knn.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home2/clinux01/Downloads/src/knn.cpp -o CMakeFiles/sentiment.dir/src/knn.cpp.s

CMakeFiles/sentiment.dir/src/knn.cpp.o.requires:

.PHONY : CMakeFiles/sentiment.dir/src/knn.cpp.o.requires

CMakeFiles/sentiment.dir/src/knn.cpp.o.provides: CMakeFiles/sentiment.dir/src/knn.cpp.o.requires
	$(MAKE) -f CMakeFiles/sentiment.dir/build.make CMakeFiles/sentiment.dir/src/knn.cpp.o.provides.build
.PHONY : CMakeFiles/sentiment.dir/src/knn.cpp.o.provides

CMakeFiles/sentiment.dir/src/knn.cpp.o.provides.build: CMakeFiles/sentiment.dir/src/knn.cpp.o


CMakeFiles/sentiment.dir/src/pca.cpp.o: CMakeFiles/sentiment.dir/flags.make
CMakeFiles/sentiment.dir/src/pca.cpp.o: ../src/pca.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home2/clinux01/Downloads/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/sentiment.dir/src/pca.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sentiment.dir/src/pca.cpp.o -c /home2/clinux01/Downloads/src/pca.cpp

CMakeFiles/sentiment.dir/src/pca.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sentiment.dir/src/pca.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home2/clinux01/Downloads/src/pca.cpp > CMakeFiles/sentiment.dir/src/pca.cpp.i

CMakeFiles/sentiment.dir/src/pca.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sentiment.dir/src/pca.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home2/clinux01/Downloads/src/pca.cpp -o CMakeFiles/sentiment.dir/src/pca.cpp.s

CMakeFiles/sentiment.dir/src/pca.cpp.o.requires:

.PHONY : CMakeFiles/sentiment.dir/src/pca.cpp.o.requires

CMakeFiles/sentiment.dir/src/pca.cpp.o.provides: CMakeFiles/sentiment.dir/src/pca.cpp.o.requires
	$(MAKE) -f CMakeFiles/sentiment.dir/build.make CMakeFiles/sentiment.dir/src/pca.cpp.o.provides.build
.PHONY : CMakeFiles/sentiment.dir/src/pca.cpp.o.provides

CMakeFiles/sentiment.dir/src/pca.cpp.o.provides.build: CMakeFiles/sentiment.dir/src/pca.cpp.o


CMakeFiles/sentiment.dir/src/eigen.cpp.o: CMakeFiles/sentiment.dir/flags.make
CMakeFiles/sentiment.dir/src/eigen.cpp.o: ../src/eigen.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home2/clinux01/Downloads/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/sentiment.dir/src/eigen.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sentiment.dir/src/eigen.cpp.o -c /home2/clinux01/Downloads/src/eigen.cpp

CMakeFiles/sentiment.dir/src/eigen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sentiment.dir/src/eigen.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home2/clinux01/Downloads/src/eigen.cpp > CMakeFiles/sentiment.dir/src/eigen.cpp.i

CMakeFiles/sentiment.dir/src/eigen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sentiment.dir/src/eigen.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home2/clinux01/Downloads/src/eigen.cpp -o CMakeFiles/sentiment.dir/src/eigen.cpp.s

CMakeFiles/sentiment.dir/src/eigen.cpp.o.requires:

.PHONY : CMakeFiles/sentiment.dir/src/eigen.cpp.o.requires

CMakeFiles/sentiment.dir/src/eigen.cpp.o.provides: CMakeFiles/sentiment.dir/src/eigen.cpp.o.requires
	$(MAKE) -f CMakeFiles/sentiment.dir/build.make CMakeFiles/sentiment.dir/src/eigen.cpp.o.provides.build
.PHONY : CMakeFiles/sentiment.dir/src/eigen.cpp.o.provides

CMakeFiles/sentiment.dir/src/eigen.cpp.o.provides.build: CMakeFiles/sentiment.dir/src/eigen.cpp.o


# Object files for target sentiment
sentiment_OBJECTS = \
"CMakeFiles/sentiment.dir/src/sentiment.cpp.o" \
"CMakeFiles/sentiment.dir/src/knn.cpp.o" \
"CMakeFiles/sentiment.dir/src/pca.cpp.o" \
"CMakeFiles/sentiment.dir/src/eigen.cpp.o"

# External object files for target sentiment
sentiment_EXTERNAL_OBJECTS =

sentiment.so: CMakeFiles/sentiment.dir/src/sentiment.cpp.o
sentiment.so: CMakeFiles/sentiment.dir/src/knn.cpp.o
sentiment.so: CMakeFiles/sentiment.dir/src/pca.cpp.o
sentiment.so: CMakeFiles/sentiment.dir/src/eigen.cpp.o
sentiment.so: CMakeFiles/sentiment.dir/build.make
sentiment.so: CMakeFiles/sentiment.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home2/clinux01/Downloads/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared module sentiment.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sentiment.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/strip /home2/clinux01/Downloads/build/sentiment.so

# Rule to build all files generated by this target.
CMakeFiles/sentiment.dir/build: sentiment.so

.PHONY : CMakeFiles/sentiment.dir/build

CMakeFiles/sentiment.dir/requires: CMakeFiles/sentiment.dir/src/sentiment.cpp.o.requires
CMakeFiles/sentiment.dir/requires: CMakeFiles/sentiment.dir/src/knn.cpp.o.requires
CMakeFiles/sentiment.dir/requires: CMakeFiles/sentiment.dir/src/pca.cpp.o.requires
CMakeFiles/sentiment.dir/requires: CMakeFiles/sentiment.dir/src/eigen.cpp.o.requires

.PHONY : CMakeFiles/sentiment.dir/requires

CMakeFiles/sentiment.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sentiment.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sentiment.dir/clean

CMakeFiles/sentiment.dir/depend:
	cd /home2/clinux01/Downloads/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home2/clinux01/Downloads /home2/clinux01/Downloads /home2/clinux01/Downloads/build /home2/clinux01/Downloads/build /home2/clinux01/Downloads/build/CMakeFiles/sentiment.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sentiment.dir/depend

