# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/tanaka/Documents/Projects/Game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tanaka/Documents/Projects/Game

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
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
	$(CMAKE_COMMAND) -E cmake_progress_start /home/tanaka/Documents/Projects/Game/CMakeFiles /home/tanaka/Documents/Projects/Game/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/tanaka/Documents/Projects/Game/CMakeFiles 0
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
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named game

# Build rule for target.
game: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 game
.PHONY : game

# fast build rule for target.
game/fast:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/build
.PHONY : game/fast

DebugFunctions.o: DebugFunctions.cpp.o

.PHONY : DebugFunctions.o

# target to build an object file
DebugFunctions.cpp.o:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/DebugFunctions.cpp.o
.PHONY : DebugFunctions.cpp.o

DebugFunctions.i: DebugFunctions.cpp.i

.PHONY : DebugFunctions.i

# target to preprocess a source file
DebugFunctions.cpp.i:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/DebugFunctions.cpp.i
.PHONY : DebugFunctions.cpp.i

DebugFunctions.s: DebugFunctions.cpp.s

.PHONY : DebugFunctions.s

# target to generate assembly for a file
DebugFunctions.cpp.s:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/DebugFunctions.cpp.s
.PHONY : DebugFunctions.cpp.s

DebugScreen.o: DebugScreen.cpp.o

.PHONY : DebugScreen.o

# target to build an object file
DebugScreen.cpp.o:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/DebugScreen.cpp.o
.PHONY : DebugScreen.cpp.o

DebugScreen.i: DebugScreen.cpp.i

.PHONY : DebugScreen.i

# target to preprocess a source file
DebugScreen.cpp.i:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/DebugScreen.cpp.i
.PHONY : DebugScreen.cpp.i

DebugScreen.s: DebugScreen.cpp.s

.PHONY : DebugScreen.s

# target to generate assembly for a file
DebugScreen.cpp.s:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/DebugScreen.cpp.s
.PHONY : DebugScreen.cpp.s

EventObject.o: EventObject.cpp.o

.PHONY : EventObject.o

# target to build an object file
EventObject.cpp.o:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/EventObject.cpp.o
.PHONY : EventObject.cpp.o

EventObject.i: EventObject.cpp.i

.PHONY : EventObject.i

# target to preprocess a source file
EventObject.cpp.i:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/EventObject.cpp.i
.PHONY : EventObject.cpp.i

EventObject.s: EventObject.cpp.s

.PHONY : EventObject.s

# target to generate assembly for a file
EventObject.cpp.s:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/EventObject.cpp.s
.PHONY : EventObject.cpp.s

EventVector.o: EventVector.cpp.o

.PHONY : EventVector.o

# target to build an object file
EventVector.cpp.o:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/EventVector.cpp.o
.PHONY : EventVector.cpp.o

EventVector.i: EventVector.cpp.i

.PHONY : EventVector.i

# target to preprocess a source file
EventVector.cpp.i:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/EventVector.cpp.i
.PHONY : EventVector.cpp.i

EventVector.s: EventVector.cpp.s

.PHONY : EventVector.s

# target to generate assembly for a file
EventVector.cpp.s:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/EventVector.cpp.s
.PHONY : EventVector.cpp.s

Game.o: Game.cpp.o

.PHONY : Game.o

# target to build an object file
Game.cpp.o:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/Game.cpp.o
.PHONY : Game.cpp.o

Game.i: Game.cpp.i

.PHONY : Game.i

# target to preprocess a source file
Game.cpp.i:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/Game.cpp.i
.PHONY : Game.cpp.i

Game.s: Game.cpp.s

.PHONY : Game.s

# target to generate assembly for a file
Game.cpp.s:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/Game.cpp.s
.PHONY : Game.cpp.s

Image.o: Image.cpp.o

.PHONY : Image.o

# target to build an object file
Image.cpp.o:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/Image.cpp.o
.PHONY : Image.cpp.o

Image.i: Image.cpp.i

.PHONY : Image.i

# target to preprocess a source file
Image.cpp.i:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/Image.cpp.i
.PHONY : Image.cpp.i

Image.s: Image.cpp.s

.PHONY : Image.s

# target to generate assembly for a file
Image.cpp.s:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/Image.cpp.s
.PHONY : Image.cpp.s

NovelText.o: NovelText.cpp.o

.PHONY : NovelText.o

# target to build an object file
NovelText.cpp.o:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/NovelText.cpp.o
.PHONY : NovelText.cpp.o

NovelText.i: NovelText.cpp.i

.PHONY : NovelText.i

# target to preprocess a source file
NovelText.cpp.i:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/NovelText.cpp.i
.PHONY : NovelText.cpp.i

NovelText.s: NovelText.cpp.s

.PHONY : NovelText.s

# target to generate assembly for a file
NovelText.cpp.s:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/NovelText.cpp.s
.PHONY : NovelText.cpp.s

Object.o: Object.cpp.o

.PHONY : Object.o

# target to build an object file
Object.cpp.o:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/Object.cpp.o
.PHONY : Object.cpp.o

Object.i: Object.cpp.i

.PHONY : Object.i

# target to preprocess a source file
Object.cpp.i:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/Object.cpp.i
.PHONY : Object.cpp.i

Object.s: Object.cpp.s

.PHONY : Object.s

# target to generate assembly for a file
Object.cpp.s:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/Object.cpp.s
.PHONY : Object.cpp.s

RenderVector.o: RenderVector.cpp.o

.PHONY : RenderVector.o

# target to build an object file
RenderVector.cpp.o:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/RenderVector.cpp.o
.PHONY : RenderVector.cpp.o

RenderVector.i: RenderVector.cpp.i

.PHONY : RenderVector.i

# target to preprocess a source file
RenderVector.cpp.i:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/RenderVector.cpp.i
.PHONY : RenderVector.cpp.i

RenderVector.s: RenderVector.cpp.s

.PHONY : RenderVector.s

# target to generate assembly for a file
RenderVector.cpp.s:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/RenderVector.cpp.s
.PHONY : RenderVector.cpp.s

SDL_Pixel.o: SDL_Pixel.cpp.o

.PHONY : SDL_Pixel.o

# target to build an object file
SDL_Pixel.cpp.o:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/SDL_Pixel.cpp.o
.PHONY : SDL_Pixel.cpp.o

SDL_Pixel.i: SDL_Pixel.cpp.i

.PHONY : SDL_Pixel.i

# target to preprocess a source file
SDL_Pixel.cpp.i:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/SDL_Pixel.cpp.i
.PHONY : SDL_Pixel.cpp.i

SDL_Pixel.s: SDL_Pixel.cpp.s

.PHONY : SDL_Pixel.s

# target to generate assembly for a file
SDL_Pixel.cpp.s:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/SDL_Pixel.cpp.s
.PHONY : SDL_Pixel.cpp.s

Screen.o: Screen.cpp.o

.PHONY : Screen.o

# target to build an object file
Screen.cpp.o:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/Screen.cpp.o
.PHONY : Screen.cpp.o

Screen.i: Screen.cpp.i

.PHONY : Screen.i

# target to preprocess a source file
Screen.cpp.i:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/Screen.cpp.i
.PHONY : Screen.cpp.i

Screen.s: Screen.cpp.s

.PHONY : Screen.s

# target to generate assembly for a file
Screen.cpp.s:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/Screen.cpp.s
.PHONY : Screen.cpp.s

ScreenObject.o: ScreenObject.cpp.o

.PHONY : ScreenObject.o

# target to build an object file
ScreenObject.cpp.o:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/ScreenObject.cpp.o
.PHONY : ScreenObject.cpp.o

ScreenObject.i: ScreenObject.cpp.i

.PHONY : ScreenObject.i

# target to preprocess a source file
ScreenObject.cpp.i:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/ScreenObject.cpp.i
.PHONY : ScreenObject.cpp.i

ScreenObject.s: ScreenObject.cpp.s

.PHONY : ScreenObject.s

# target to generate assembly for a file
ScreenObject.cpp.s:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/ScreenObject.cpp.s
.PHONY : ScreenObject.cpp.s

Text.o: Text.cpp.o

.PHONY : Text.o

# target to build an object file
Text.cpp.o:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/Text.cpp.o
.PHONY : Text.cpp.o

Text.i: Text.cpp.i

.PHONY : Text.i

# target to preprocess a source file
Text.cpp.i:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/Text.cpp.i
.PHONY : Text.cpp.i

Text.s: Text.cpp.s

.PHONY : Text.s

# target to generate assembly for a file
Text.cpp.s:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/Text.cpp.s
.PHONY : Text.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... game"
	@echo "... edit_cache"
	@echo "... DebugFunctions.o"
	@echo "... DebugFunctions.i"
	@echo "... DebugFunctions.s"
	@echo "... DebugScreen.o"
	@echo "... DebugScreen.i"
	@echo "... DebugScreen.s"
	@echo "... EventObject.o"
	@echo "... EventObject.i"
	@echo "... EventObject.s"
	@echo "... EventVector.o"
	@echo "... EventVector.i"
	@echo "... EventVector.s"
	@echo "... Game.o"
	@echo "... Game.i"
	@echo "... Game.s"
	@echo "... Image.o"
	@echo "... Image.i"
	@echo "... Image.s"
	@echo "... NovelText.o"
	@echo "... NovelText.i"
	@echo "... NovelText.s"
	@echo "... Object.o"
	@echo "... Object.i"
	@echo "... Object.s"
	@echo "... RenderVector.o"
	@echo "... RenderVector.i"
	@echo "... RenderVector.s"
	@echo "... SDL_Pixel.o"
	@echo "... SDL_Pixel.i"
	@echo "... SDL_Pixel.s"
	@echo "... Screen.o"
	@echo "... Screen.i"
	@echo "... Screen.s"
	@echo "... ScreenObject.o"
	@echo "... ScreenObject.i"
	@echo "... ScreenObject.s"
	@echo "... Text.o"
	@echo "... Text.i"
	@echo "... Text.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
