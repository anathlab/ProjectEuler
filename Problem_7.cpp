/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/
/*!
*\author Anath
*\date January 2023
*/

#include <iostream>
using namespace std;
bool isPrime(int number) {
  for (int i = 2; i*i <= number; ++i) {
    if ((number % i) == 0) return false;
  }
  return number > 1;
}

int main() {
  int i = 2;
  for (int primes = 0; ; ++i) {
    if (isPrime(i)) {
      if (++primes == 10001) {
        std::cout << i << "\n";
        break;
      }
    }
  }
  return 0;
}