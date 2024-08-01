cmake_minimum_required(VERSION 3.16)
project(CMakeSFMLProject LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

add_executable(main src/main.cpp src/DataEntry.cpp)
target_link_libraries(main PRIVATE sfml-graphics)
target_link_libraries(main PRIVATE sfml-system)
target_link_libraries(main PRIVATE sfml-window)
target_link_libraries(main PRIVATE sfml-network)
target_link_libraries(main PRIVATE sfml-audio)
target_compile_features(main PRIVATE cxx_std_17)
