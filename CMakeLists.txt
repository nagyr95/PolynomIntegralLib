cmake_minimum_required(VERSION 3.10)
project(PolynomIntegral)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the ETL library
add_subdirectory(etl)

# Add the library
add_library(PolynomIntegral SHARED src/polyIntLibrary.cpp)

# Specify include directories
target_include_directories(PolynomIntegral PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/etl/include)

# Link the ETL library
target_link_libraries(PolynomIntegral PRIVATE ETL)




