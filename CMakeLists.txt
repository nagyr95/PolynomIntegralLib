cmake_minimum_required(VERSION 3.10)
project(PolynomIntegral)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

Include(FetchContent)

set(ETL_VERSION 20.40.0)
FetchContent_Declare(
  etl
  URL https://github.com/ETLCPP/etl/archive/refs/tags/${ETL_VERSION}.zip
  FIND_PACKAGE_ARGS ${ETL_VERSION}
)

set(BUILD_EXAMPLES OFF CACHE INTERNAL "")
FetchContent_MakeAvailable(etl)

# My Project
set(SOURCE_FILES src/polyIntLibrary.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# Specify include directories
target_include_directories(PolynomIntegral PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(${PROJECT_NAME} etl)






