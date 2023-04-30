```bash
git clone ...
git submodule update --init --recursive
```


```bash
cmake -S . -B build/MyProject
cmake --build build/MyProject
./build/MyProject/MyProject
```

```bash
cmake -S tests -B build/tests
cmake --build build/tests
./build/test/MyTests
```

To collect code coverage information, run CMake with the `-DENABLE_TEST_COVERAGE=1` option.