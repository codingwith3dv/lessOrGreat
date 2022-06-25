project(lessOrGreat)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
  lessOrGreat.cpp
  randGen.cpp
)

add_executable(lessOrGreat ${SOURCES})
