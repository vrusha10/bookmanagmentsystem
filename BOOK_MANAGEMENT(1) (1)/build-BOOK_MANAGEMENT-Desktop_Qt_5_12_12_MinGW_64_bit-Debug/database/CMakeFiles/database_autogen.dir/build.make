# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\HPGGS03\Downloads\BOOK_MANAGEMENT(1) (1)\BOOK_MANAGEMENT"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\HPGGS03\Downloads\BOOK_MANAGEMENT(1) (1)\build-BOOK_MANAGEMENT-Desktop_Qt_5_12_12_MinGW_64_bit-Debug"

# Utility rule file for database_autogen.

# Include any custom commands dependencies for this target.
include database/CMakeFiles/database_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include database/CMakeFiles/database_autogen.dir/progress.make

database/CMakeFiles/database_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="C:\Users\HPGGS03\Downloads\BOOK_MANAGEMENT(1) (1)\build-BOOK_MANAGEMENT-Desktop_Qt_5_12_12_MinGW_64_bit-Debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target database"
	cd /d C:\Users\HPGGS03\DOWNLO~1\BOOK_M~1\BUILD-~2\database && "C:\Program Files\CMake\bin\cmake.exe" -E cmake_autogen "C:/Users/HPGGS03/Downloads/BOOK_MANAGEMENT(1) (1)/build-BOOK_MANAGEMENT-Desktop_Qt_5_12_12_MinGW_64_bit-Debug/database/CMakeFiles/database_autogen.dir/AutogenInfo.json" Debug

database_autogen: database/CMakeFiles/database_autogen
database_autogen: database/CMakeFiles/database_autogen.dir/build.make
.PHONY : database_autogen

# Rule to build all files generated by this target.
database/CMakeFiles/database_autogen.dir/build: database_autogen
.PHONY : database/CMakeFiles/database_autogen.dir/build

database/CMakeFiles/database_autogen.dir/clean:
	cd /d C:\Users\HPGGS03\DOWNLO~1\BOOK_M~1\BUILD-~2\database && $(CMAKE_COMMAND) -P CMakeFiles\database_autogen.dir\cmake_clean.cmake
.PHONY : database/CMakeFiles/database_autogen.dir/clean

database/CMakeFiles/database_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\HPGGS03\Downloads\BOOK_MANAGEMENT(1) (1)\BOOK_MANAGEMENT" "C:\Users\HPGGS03\Downloads\BOOK_MANAGEMENT(1) (1)\BOOK_MANAGEMENT\database" "C:\Users\HPGGS03\Downloads\BOOK_MANAGEMENT(1) (1)\build-BOOK_MANAGEMENT-Desktop_Qt_5_12_12_MinGW_64_bit-Debug" "C:\Users\HPGGS03\Downloads\BOOK_MANAGEMENT(1) (1)\build-BOOK_MANAGEMENT-Desktop_Qt_5_12_12_MinGW_64_bit-Debug\database" "C:\Users\HPGGS03\Downloads\BOOK_MANAGEMENT(1) (1)\build-BOOK_MANAGEMENT-Desktop_Qt_5_12_12_MinGW_64_bit-Debug\database\CMakeFiles\database_autogen.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : database/CMakeFiles/database_autogen.dir/depend

