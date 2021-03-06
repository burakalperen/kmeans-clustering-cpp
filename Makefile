# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /home/burak/Documents/OKUL/oop_project/last

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/burak/Documents/OKUL/oop_project/last

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/burak/Documents/OKUL/oop_project/last/CMakeFiles /home/burak/Documents/OKUL/oop_project/last/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/burak/Documents/OKUL/oop_project/last/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named program

# Build rule for target.
program: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 program
.PHONY : program

# fast build rule for target.
program/fast:
	$(MAKE) -f CMakeFiles/program.dir/build.make CMakeFiles/program.dir/build
.PHONY : program/fast

#=============================================================================
# Target rules for targets named nodesoup

# Build rule for target.
nodesoup: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 nodesoup
.PHONY : nodesoup

# fast build rule for target.
nodesoup/fast:
	$(MAKE) -f matplotplusplus/source/3rd_party/CMakeFiles/nodesoup.dir/build.make matplotplusplus/source/3rd_party/CMakeFiles/nodesoup.dir/build
.PHONY : nodesoup/fast

#=============================================================================
# Target rules for targets named matplot

# Build rule for target.
matplot: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 matplot
.PHONY : matplot

# fast build rule for target.
matplot/fast:
	$(MAKE) -f matplotplusplus/source/matplot/CMakeFiles/matplot.dir/build.make matplotplusplus/source/matplot/CMakeFiles/matplot.dir/build
.PHONY : matplot/fast

src/Clustering.o: src/Clustering.cpp.o

.PHONY : src/Clustering.o

# target to build an object file
src/Clustering.cpp.o:
	$(MAKE) -f CMakeFiles/program.dir/build.make CMakeFiles/program.dir/src/Clustering.cpp.o
.PHONY : src/Clustering.cpp.o

src/Clustering.i: src/Clustering.cpp.i

.PHONY : src/Clustering.i

# target to preprocess a source file
src/Clustering.cpp.i:
	$(MAKE) -f CMakeFiles/program.dir/build.make CMakeFiles/program.dir/src/Clustering.cpp.i
.PHONY : src/Clustering.cpp.i

src/Clustering.s: src/Clustering.cpp.s

.PHONY : src/Clustering.s

# target to generate assembly for a file
src/Clustering.cpp.s:
	$(MAKE) -f CMakeFiles/program.dir/build.make CMakeFiles/program.dir/src/Clustering.cpp.s
.PHONY : src/Clustering.cpp.s

src/Kmeans.o: src/Kmeans.cpp.o

.PHONY : src/Kmeans.o

# target to build an object file
src/Kmeans.cpp.o:
	$(MAKE) -f CMakeFiles/program.dir/build.make CMakeFiles/program.dir/src/Kmeans.cpp.o
.PHONY : src/Kmeans.cpp.o

src/Kmeans.i: src/Kmeans.cpp.i

.PHONY : src/Kmeans.i

# target to preprocess a source file
src/Kmeans.cpp.i:
	$(MAKE) -f CMakeFiles/program.dir/build.make CMakeFiles/program.dir/src/Kmeans.cpp.i
.PHONY : src/Kmeans.cpp.i

src/Kmeans.s: src/Kmeans.cpp.s

.PHONY : src/Kmeans.s

# target to generate assembly for a file
src/Kmeans.cpp.s:
	$(MAKE) -f CMakeFiles/program.dir/build.make CMakeFiles/program.dir/src/Kmeans.cpp.s
.PHONY : src/Kmeans.cpp.s

src/Visualize.o: src/Visualize.cpp.o

.PHONY : src/Visualize.o

# target to build an object file
src/Visualize.cpp.o:
	$(MAKE) -f CMakeFiles/program.dir/build.make CMakeFiles/program.dir/src/Visualize.cpp.o
.PHONY : src/Visualize.cpp.o

src/Visualize.i: src/Visualize.cpp.i

.PHONY : src/Visualize.i

# target to preprocess a source file
src/Visualize.cpp.i:
	$(MAKE) -f CMakeFiles/program.dir/build.make CMakeFiles/program.dir/src/Visualize.cpp.i
.PHONY : src/Visualize.cpp.i

src/Visualize.s: src/Visualize.cpp.s

.PHONY : src/Visualize.s

# target to generate assembly for a file
src/Visualize.cpp.s:
	$(MAKE) -f CMakeFiles/program.dir/build.make CMakeFiles/program.dir/src/Visualize.cpp.s
.PHONY : src/Visualize.cpp.s

src/main.o: src/main.cpp.o

.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) -f CMakeFiles/program.dir/build.make CMakeFiles/program.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) -f CMakeFiles/program.dir/build.make CMakeFiles/program.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) -f CMakeFiles/program.dir/build.make CMakeFiles/program.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

src/node.o: src/node.cpp.o

.PHONY : src/node.o

# target to build an object file
src/node.cpp.o:
	$(MAKE) -f CMakeFiles/program.dir/build.make CMakeFiles/program.dir/src/node.cpp.o
.PHONY : src/node.cpp.o

src/node.i: src/node.cpp.i

.PHONY : src/node.i

# target to preprocess a source file
src/node.cpp.i:
	$(MAKE) -f CMakeFiles/program.dir/build.make CMakeFiles/program.dir/src/node.cpp.i
.PHONY : src/node.cpp.i

src/node.s: src/node.cpp.s

.PHONY : src/node.s

# target to generate assembly for a file
src/node.cpp.s:
	$(MAKE) -f CMakeFiles/program.dir/build.make CMakeFiles/program.dir/src/node.cpp.s
.PHONY : src/node.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... program"
	@echo "... nodesoup"
	@echo "... matplot"
	@echo "... src/Clustering.o"
	@echo "... src/Clustering.i"
	@echo "... src/Clustering.s"
	@echo "... src/Kmeans.o"
	@echo "... src/Kmeans.i"
	@echo "... src/Kmeans.s"
	@echo "... src/Visualize.o"
	@echo "... src/Visualize.i"
	@echo "... src/Visualize.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
	@echo "... src/node.o"
	@echo "... src/node.i"
	@echo "... src/node.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

