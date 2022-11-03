// Sample Project String Tests
//
// Luna Parker, PROG71985 Fall 2022
// Please see Git tags for version history

// We always include gtest.h before defining any tests
#include "gtest/gtest.h"

// To include our source C files, we use the normal include,
// but wrap it in extern to indicate to the compiler that we're
// not dealing with C++
extern "C" {
    #include "../source_code/str.h"
}

// The first parameter to TEST is the test suite name
// The second parameter to TEST is the test name
TEST(isStringEmptyTests, StringIsEmpty) {
    char data[] = {'\0'};

    bool expected = true;
    bool actual = isStringEmpty(data);

    // We can use a wide variety of assert statements provided
    // by Googletest. ASSERT_EQ checks that the two variables
    // are equal in value.
    ASSERT_EQ(expected, actual);
}

TEST(isStringEmptyTests, StringIs1Char) {
    char data[] = {'A', '\0'};

    bool expected = false;
    bool actual = isStringEmpty(data);

    ASSERT_EQ(expected, actual);
}
