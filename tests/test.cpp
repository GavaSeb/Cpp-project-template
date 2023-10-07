#include <iostream>
#include "gtest/gtest.h"
#include <MyClass.hpp>
#include <glog/logging.h>

TEST(example, subtract) {
    MyClass mc;
    ASSERT_EQ(10,mc.foo(5));
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);

    /* Configure glog to not pollute tests outputs */
    google::InitGoogleLogging(argv[0]);            // 
    google::SetLogDestination(google::ERROR, "");  // Set log level to ERROR
    google::SetStderrLogging(google::ERROR);       // Direct log messages to stderr (standard error)

    /* Run */
    return RUN_ALL_TESTS();
}