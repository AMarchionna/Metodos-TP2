# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = /home/agustin/git_repo/Metodos-TP2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/agustin/git_repo/Metodos-TP2/build

# Include any dependencies generated for this target.
include CMakeFiles/sentiment.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sentiment.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sentiment.dir/flags.make

CMakeFiles/sentiment.dir/src/sentiment.cpp.o: CMakeFiles/sentiment.dir/flags.make
CMakeFiles/sentiment.dir/src/sentiment.cpp.o: ../src/sentiment.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agustin/git_repo/Metodos-TP2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sentiment.dir/src/sentiment.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sentiment.dir/src/sentiment.cpp.o -c /home/agustin/git_repo/Metodos-TP2/src/sentiment.cpp

CMakeFiles/sentiment.dir/src/sentiment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sentiment.dir/src/sentiment.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agustin/git_repo/Metodos-TP2/src/sentiment.cpp > CMakeFiles/sentiment.dir/src/sentiment.cpp.i

CMakeFiles/sentiment.dir/src/sentiment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sentiment.dir/src/sentiment.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agustin/git_repo/Metodos-TP2/src/sentiment.cpp -o CMakeFiles/sentiment.dir/src/sentiment.cpp.s

CMakeFiles/sentiment.dir/src/knn.cpp.o: CMakeFiles/sentiment.dir/flags.make
CMakeFiles/sentiment.dir/src/knn.cpp.o: ../src/knn.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agustin/git_repo/Metodos-TP2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sentiment.dir/src/knn.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sentiment.dir/src/knn.cpp.o -c /home/agustin/git_repo/Metodos-TP2/src/knn.cpp

CMakeFiles/sentiment.dir/src/knn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sentiment.dir/src/knn.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agustin/git_repo/Metodos-TP2/src/knn.cpp > CMakeFiles/sentiment.dir/src/knn.cpp.i

CMakeFiles/sentiment.dir/src/knn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sentiment.dir/src/knn.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agustin/git_repo/Metodos-TP2/src/knn.cpp -o CMakeFiles/sentiment.dir/src/knn.cpp.s

CMakeFiles/sentiment.dir/src/pca.cpp.o: CMakeFiles/sentiment.dir/flags.make
CMakeFiles/sentiment.dir/src/pca.cpp.o: ../src/pca.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agustin/git_repo/Metodos-TP2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/sentiment.dir/src/pca.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sentiment.dir/src/pca.cpp.o -c /home/agustin/git_repo/Metodos-TP2/src/pca.cpp

CMakeFiles/sentiment.dir/src/pca.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sentiment.dir/src/pca.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agustin/git_repo/Metodos-TP2/src/pca.cpp > CMakeFiles/sentiment.dir/src/pca.cpp.i

CMakeFiles/sentiment.dir/src/pca.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sentiment.dir/src/pca.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agustin/git_repo/Metodos-TP2/src/pca.cpp -o CMakeFiles/sentiment.dir/src/pca.cpp.s

CMakeFiles/sentiment.dir/src/eigen.cpp.o: CMakeFiles/sentiment.dir/flags.make
CMakeFiles/sentiment.dir/src/eigen.cpp.o: ../src/eigen.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agustin/git_repo/Metodos-TP2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/sentiment.dir/src/eigen.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sentiment.dir/src/eigen.cpp.o -c /home/agustin/git_repo/Metodos-TP2/src/eigen.cpp

CMakeFiles/sentiment.dir/src/eigen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sentiment.dir/src/eigen.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agustin/git_repo/Metodos-TP2/src/eigen.cpp > CMakeFiles/sentiment.dir/src/eigen.cpp.i

CMakeFiles/sentiment.dir/src/eigen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sentiment.dir/src/eigen.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agustin/git_repo/Metodos-TP2/src/eigen.cpp -o CMakeFiles/sentiment.dir/src/eigen.cpp.s

# Object files for target sentiment
sentiment_OBJECTS = \
"CMakeFiles/sentiment.dir/src/sentiment.cpp.o" \
"CMakeFiles/sentiment.dir/src/knn.cpp.o" \
"CMakeFiles/sentiment.dir/src/pca.cpp.o" \
"CMakeFiles/sentiment.dir/src/eigen.cpp.o"

# External object files for target sentiment
sentiment_EXTERNAL_OBJECTS =

sentiment.cpython-37m-x86_64-linux-gnu.so: CMakeFiles/sentiment.dir/src/sentiment.cpp.o
sentiment.cpython-37m-x86_64-linux-gnu.so: CMakeFiles/sentiment.dir/src/knn.cpp.o
sentiment.cpython-37m-x86_64-linux-gnu.so: CMakeFiles/sentiment.dir/src/pca.cpp.o
sentiment.cpython-37m-x86_64-linux-gnu.so: CMakeFiles/sentiment.dir/src/eigen.cpp.o
sentiment.cpython-37m-x86_64-linux-gnu.so: CMakeFiles/sentiment.dir/build.make
sentiment.cpython-37m-x86_64-linux-gnu.so: CMakeFiles/sentiment.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/agustin/git_repo/Metodos-TP2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared module sentiment.cpython-37m-x86_64-linux-gnu.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sentiment.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/strip /home/agustin/git_repo/Metodos-TP2/build/sentiment.cpython-37m-x86_64-linux-gnu.so

# Rule to build all files generated by this target.
CMakeFiles/sentiment.dir/build: sentiment.cpython-37m-x86_64-linux-gnu.so

.PHONY : CMakeFiles/sentiment.dir/build

CMakeFiles/sentiment.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sentiment.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sentiment.dir/clean

CMakeFiles/sentiment.dir/depend:
	cd /home/agustin/git_repo/Metodos-TP2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/agustin/git_repo/Metodos-TP2 /home/agustin/git_repo/Metodos-TP2 /home/agustin/git_repo/Metodos-TP2/build /home/agustin/git_repo/Metodos-TP2/build /home/agustin/git_repo/Metodos-TP2/build/CMakeFiles/sentiment.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sentiment.dir/depend
