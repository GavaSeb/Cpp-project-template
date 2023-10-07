# Template C++/CMake Project
A Template project for building C++ applications with cmake. Unit tests with GoogleTest.
## Requirements
* CMake (version ?)
* Git
* Doxygen (optional)

## Dependencies
* *GoogleTest* for unit testing
* *GLog* for logging

# How to use

## Setup
```bash
git clone ...
git submodule update --init --recursive
```
## Build
```bash
cmake -S . -B build
cmake --build build
```

## Run
```bash
./build/apps/MyProject_app
```
By default will create a *logs* directory in the current directory, to specify another directory use:
```bash
./build/apps/app --log_dir=/some/directory
```
For other options, check glog documentation.

## Tests
```bash
./build/tests/MyProject_test
```

To collect code coverage information, run CMake with the `-DENABLE_TEST_COVERAGE=1` option.

## Documentation (requires Doxygen)
```bash
cmake --build build --target docs
```
Result in *build/docs/html*
