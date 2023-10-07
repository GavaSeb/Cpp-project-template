#include <iostream>
#include <glog/logging.h>

#include "MyClass.hpp"

int main(int argc, char const *argv[])
{
    // Initialize Google’s logging library.
    google::InitGoogleLogging(argv[0]);

    FLAGS_minloglevel = google::INFO;  // Set minimum log level to INFO
    FLAGS_logtostderr = false;  // Disable logging to stderr
    FLAGS_alsologtostderr = false;  // Disable duplication of log messages to stderr
    FLAGS_log_dir = "./logs";  // Set log directory
    google::SetLogDestination(google::GLOG_INFO, "./logs/program.log");
    LOG(INFO) << "Found " << " cookies";
    LOG(WARNING) << "Something Bad";
    LOG(ERROR) << "Something Really Bad";

    MyClass mc;
    
    return 0;
}