// Sample Project Unit Tests
// This program runs a variety of automated tests against
// the functions defined in the source_code program
//
// Luna Parker, PROG71985 Fall 2022
// Please see Git tags for version history

// In every test file and in the main program file, we
// always include gtest.h
#include "gtest/gtest.h"

int main(int argc, char **argv) {
    // No need to edit the below lines - these will
    // invoke all Googletests automatically for you
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
