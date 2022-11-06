#pragma once

#include <fstream>
#include <string>

#include "config.hpp"

namespace uni_course_cpp {
class Logger {
 public:
  static Logger& get_logger();
  void log(const std::string& string);

  Logger(const Logger& other) = delete;
  void operator=(const Logger& other) = delete;
  Logger(Logger&& other) = delete;
  void operator=(Logger&& other) = delete;

 private:
  Logger(){};
  ~Logger() = default;

  std::ofstream log_file;
};
}  // namespace uni_course_cpp
