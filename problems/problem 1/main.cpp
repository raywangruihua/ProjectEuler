/*
If we list all natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all multiples of 3 or 5 below 1000.

Answer: 233168
*/

#include <iostream>

constexpr int MAX = 999;

int main() {
  // find number of multiples
  int n3  = MAX / 3;
  int n5  = MAX / 5;
  int n15 = MAX / 15;

  // find arithmetic sums
  int sum3  = (3  * n3  * (n3  + 1)) / 2;
  int sum5  = (5  * n5  * (n5  + 1)) / 2;
  int sum15 = (15 * n15 * (n15 + 1)) / 2;

  // inclusion-exclusion principle
  int sum = sum3 + sum5 - sum15;

  std::cout << "Answer: " << sum;
}