cmake_minimum_required(VERSION 3.23)

# ***
# The below may need to be edited (if you've changed this folder's name)
#
# The parameter to project is just this folder's name. So if you changed
# it to "q1_tests" for example, change "tests" to "q1_tests".

project(tests)

# No need to edit the lines below until the add_executable line
# ***


# We fetch the remote Google Test archive automatically into our local project
# so that we don't need to manually fetch it from GitHub
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/58d77fa8070e8cec2dc1ed015d66b454c8d78850.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Set fixed Googletest version which corresponds to the ZIP file specified above
set(GOOGLETEST_VERSION 1.12.1)

# Turn off Googlemock since we only need the test framework
SET(BUILD_GMOCK OFF)

# Turn on Googletest since we're using it for testing
SET(INSTALL_GTEST ON)

# ***
# The below needs to be edited!
#
# All of the test C++ files, and source C files that you wish to test, must be specified
# in the line below
#
# To include source C files, we can use '..' to go up a directory and into another folder

add_executable(tests main.cpp number_tests.cpp str_tests.cpp ../source_code/number.c ../source_code/str.c)

# No need to edit further - happy testing!
# ***

# Finally we link the libraries we remotely fetched to our project
target_link_libraries(tests gtest gtest_main)
