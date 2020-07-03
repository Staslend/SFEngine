cmake_minimum_required(VERSION 2.6)
project(game)

find_package(SDL2 REQUIRED)
find_package(SDL2_ttf REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS}
		    ${SDL2_TTF_INCLUDE_DIR})

include_directories(${PROJECT_SOURCE_DIR})


add_executable(game main.cpp SDL_Pixel.cpp ScreenObject.cpp EventObject.cpp Object.cpp RenderVector.cpp
		EventVector.cpp Image.cpp Game.cpp NovelText.cpp Text.cpp Screen.cpp DebugFunctions.cpp
		DebugScreen.cpp ScreenVector.cpp)

target_link_libraries(game ${SDL2_LIBRARIES} ${SDL2_TTF_LIBRARIES})

