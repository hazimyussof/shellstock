cmake_minimum_required(VERSION 3.11.0)

project(shellstock VERSION 1.0)

# --- Fetch FTXUI ---
include(FetchContent)

set(FETCHCONTENT_UPDATES_DISCONNECTED TRUE)
FetchContent_Declare(FTXUI
    GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
    GIT_TAG main # Important: Specify a version or a commit hash here.
  )

FetchContent_GetProperties(ftxui)

if(NOT ftxui_POPULATED)
  FetchContent_Populate(ftxui)
  add_subdirectory(${ftxui_SOURCE_DIR} ${ftxui_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()
# -------------------

file(GLOB_RECURSE SRC_FILES src/*.cpp)

add_executable(${PROJECT_NAME} ${SRC_FILES})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
