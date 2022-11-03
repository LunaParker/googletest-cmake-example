// Sample Project Number Tests
//
// Luna Parker, PROG71985 Fall 2022
// Please see Git tags for version history

// We always include gtest.h before defining any tests
#include "gtest/gtest.h"

// To include our source C files, we use the normal include,
// but wrap it in extern to indicate to the compiler that we're
// not dealing with C++
extern "C" {
    #include "../source_code/number.h"
}

// The first parameter to TEST is the test suite name
// The second parameter to TEST is the test name
TEST(sumOfTwoIntegersTests, twoPositiveIntegers) {
    int expected = 5;
    int actual = sumOfTwoIntegers(2, 3);

    // We can use a wide variety of assert statements provided
    // by Googletest. ASSERT_EQ checks that the two variables
    // are equal in value.
    ASSERT_EQ(expected, actual);
}

TEST(sumOfTwoIntegersTests, onePositiveOneNegativeInteger) {
    int expected = -1;
    int actual = sumOfTwoIntegers(-2, 1);

    ASSERT_EQ(expected, actual);
}
