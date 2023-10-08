#include <string>
#include <filesystem>
#include <glog/logging.h>

// Project specific
#include "MyClass.hpp"

// Default path of the log directory if not specified with --log_dir
const std::string DEFAULT_LOG_PATH{ "./logs" };

int main(int argc, char *argv[])
{
    /* Initialize Google’s logging library. */
    google::ParseCommandLineFlags(&argc, &argv, true);
    // If not specified, use default log path
    if(FLAGS_log_dir == "") {
        FLAGS_log_dir = DEFAULT_LOG_PATH;
    }
    // Check if the log directory exists, and create it if it doesnt
    if (!std::filesystem::exists(FLAGS_log_dir)) {
        std::filesystem::create_directories(FLAGS_log_dir);
    }
    google::InitGoogleLogging(argv[0]);
    
    /* Start the application */
    LOG(INFO) << "--- Starting Application ---";
    mynamespace::MyClass mc;
    
    return 0;
}