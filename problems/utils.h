#ifndef UTILS_H
#define UTILS_H

#include <chrono>
#include <cstdint>

struct Timer {
  std::chrono::steady_clock::time_point start_time{};

  // start the timer
  void start() {
    start_time = std::chrono::steady_clock::now();
  }

  // return elapsed time in nanoseconds
  std::chrono::nanoseconds lap() const {
    return std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now() - start_time);
  }
};

#endif