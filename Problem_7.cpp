/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/
/*!
 *\author Anath
 *\date January 2023
 */

#include <iostream>

bool isPrime(int number)
{
  for (int i = 2; i*i <= number; ++i)
  {
    if ((number % i) == 0) return false;
  }
  return number > 1;
}

int whatIsTheNPrimeNumber(int n)
{
  int i = 2;
  for (int primes = 1; ; ++i)
  {
    if (isPrime(i))
    {
      if (++primes == n)
      {
        break;
      }
    }
  }
  return i;
}

int main() {
  std::cout << whatIsTheNPrimeNumber(10001) << std::endl; //104729
  return 0;
}