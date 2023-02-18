/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/
/*!
 *\author Anath
 *\date February 2023
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

unsigned long long int summationOfPrimes(int maxRange)
{
    unsigned long long int sum {0};
    
    for(int i = 0; i < maxRange; i++)
    {
        if(isPrime(i))
        {
            sum = sum + i;
        }
    }
    return sum;
}

int main()
{
    std::cout << summationOfPrimes(2000000) << std::endl; //142913828922
    return 0;
}
