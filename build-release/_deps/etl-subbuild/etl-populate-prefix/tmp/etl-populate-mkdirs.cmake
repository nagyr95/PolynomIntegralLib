# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "F:/Ricsi/prog/cpp/polynomIntLib/build-release/_deps/etl-src")
  file(MAKE_DIRECTORY "F:/Ricsi/prog/cpp/polynomIntLib/build-release/_deps/etl-src")
endif()
file(MAKE_DIRECTORY
  "F:/Ricsi/prog/cpp/polynomIntLib/build-release/_deps/etl-build"
  "F:/Ricsi/prog/cpp/polynomIntLib/build-release/_deps/etl-subbuild/etl-populate-prefix"
  "F:/Ricsi/prog/cpp/polynomIntLib/build-release/_deps/etl-subbuild/etl-populate-prefix/tmp"
  "F:/Ricsi/prog/cpp/polynomIntLib/build-release/_deps/etl-subbuild/etl-populate-prefix/src/etl-populate-stamp"
  "F:/Ricsi/prog/cpp/polynomIntLib/build-release/_deps/etl-subbuild/etl-populate-prefix/src"
  "F:/Ricsi/prog/cpp/polynomIntLib/build-release/_deps/etl-subbuild/etl-populate-prefix/src/etl-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "F:/Ricsi/prog/cpp/polynomIntLib/build-release/_deps/etl-subbuild/etl-populate-prefix/src/etl-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "F:/Ricsi/prog/cpp/polynomIntLib/build-release/_deps/etl-subbuild/etl-populate-prefix/src/etl-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
