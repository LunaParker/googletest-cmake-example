# Googletest CMake Example for C Projects
This project shows an example of how to use Google's excellent Googletest framework to test your C programs. Googletest is an industry standard unit test tool, and it's also one of the easiest to use with CLion and CMake.

## Project Structure
The ``source_code`` folder stores a sample program written in C, which has two functions which we want to test, stored in two separate C files (``sumOfTwoIntegers`` and ``isStringEmpty``).

The ``tests`` folder stores our unit tests written in C++, with two test files, responsible for testing both of the functions.

## Googletest Installation
The ``CMakeLists.txt`` file will automatically install Googletest version 1.12.1 into your CMake build directory - no manual downloads required! All you need to do is load the CMakeLists.txt file (doing so depends on your IDE or environment).

## Integrating into an existing project
If you've got an existing program, you likely will only need to emulate and modify the ``tests`` folder to point to your existing project files.

1. Clone this project to a local folder that is **not** within your existing project's directory.
2. Copy the ``tests`` folder into your project's directory.
3. Edit the ``tests/CMakeLists.txt`` file to point to your existing program's source files. This likely will require editing the ``add_executable`` line.
4. Edit/make your own C++ test files using the example ones, and make sure to update the ``add_executable`` line to point to them (in CLion, you can do this by checking the "Add to target" button when making a new C++ file).

## Why use Googletest instead of Microsoft Unit Testing Framework for C++?
While it comes down to preference, here's my opinion on why Googletest is a better test framework for beginner C development:
1. **Googletest is more C-like** and doesn't rely as much on C++ design paradigms as Microsoft's unit testing framework does (which makes sense given the name!) As such, it's easy to understand if your background is only C, as opposed to Microsoft which relies on C++ fixtures and class concepts (which we have not learned yet in PROG71985).
2. **Googletest works cross-platform** and as such is better for teams which aren't all using Visual Studio.
3. **Googletest is integrated into more IDEs**. It works excellent with both CLion and Visual Studio, making it a more inclusive testing framework.
