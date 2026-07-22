#ifndef UTILS_H
#define UTILS_H

#include <chrono>
#include <cstdint>
#include <cstdio>

// For measuring performance of solutions
struct Timer {
  std::chrono::steady_clock::time_point start_time{};
  Timer() {
    start_time = std::chrono::steady_clock::now();
  }

  // set start time to current time
  void set() {
    start_time = std::chrono::steady_clock::now();
  }

  // return elapsed time in nanoseconds
  std::chrono::nanoseconds get() {
    return std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now() - start_time);
  }

  // print elapsed time in nanoseconds
  void printns() {
    printf("Finished after: %lld ns\n", (long long)get().count());
  }

  // print elapsed time in microseconds
  void printus() {
    printf("Finished after: %.2f us\n", get().count() / 1000.0);
  }

  // print elapsed time in milliseconds
  void printms() {
    printf("Finished after: %.2f ms\n", get().count() / 1000000.0);
  }

  // print elapsed time in seconds
  void prints() {
    printf("Finished after: %.2f s\n", get().count() / 1000000000.0);
  }
};

#endif