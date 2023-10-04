#include <iostream>
#include "gtest/gtest.h"
#include "MyClass.hpp"

TEST(example, subtract) {
    MyClass mc;
    ASSERT_EQ(10,mc.foo(5));
}