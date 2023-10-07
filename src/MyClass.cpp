#include "MyClass.hpp"
#include <iostream>

#include <glog/logging.h>

MyClass::MyClass()
{
    LOG(INFO) << "My Class Constructor";
}

int MyClass::foo(int a)
{
    return 2*a;
}
