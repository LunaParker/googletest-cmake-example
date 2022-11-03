#include "str.h"
#include <stdbool.h>
#include <string.h>

// Sample Project Source Code
// Implementations for string-related functions
//
// Luna Parker, PROG71985 Fall 2022
// Please see Git tags for version history

bool isStringEmpty(const char inputString[]) {
    return strlen(inputString) == 0;
}
