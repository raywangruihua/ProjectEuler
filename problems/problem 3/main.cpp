/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143?

Answer: 6857
*/

#include <iostream>
#include <cstdint>

int main() {
  uint64_t n = 600851475143;

  uint64_t largestPrime = 1;
  // prime factorise n
  // largest possible prime is sqrt(n) since it must multiply itself
  for (uint64_t i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      largestPrime = i;
      n /= i;
    }
  }
  if (n > 1) largestPrime = n;

  std::cout << "Answer: " << largestPrime;
}