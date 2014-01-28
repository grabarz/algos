cmake_minimum_required (VERSION 2.8.9)

project (Algos)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -stdlib=libc++ -I.")
include_directories (./)

# pkgconfig
find_package(PkgConfig)

# boost
find_package (Boost COMPONENTS system unit_test_framework REQUIRED)
include_directories (${Boost_INCLUDE_DIRS})
message("** Boost Include: ${Boost_INCLUDE_DIR}")
message("** Boost Libraries: ${Boost_LIBRARY_DIRS}")
message("** Boost Libraries: ${Boost_LIBRARIES}")

add_library (Algos SHARED
	InsertationSort.cpp)

add_executable (tests tests.cpp)

target_link_libraries (tests ${Boost_SYSTEM_LIBRARY} ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY} Algos)

enable_testing ()
add_test (UnitTests tests)
