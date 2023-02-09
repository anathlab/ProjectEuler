/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
/*!
 *\author Anath
 *\date January 2023
 */

#include <iostream>

void findPrimeFactors(unsigned long long number){
 for (long i = 2; i < number; ++i)
    {
        while (number % i == 0)
        {
            number = number / i;
        }
    }
    std::cout << number << std::endl;
}

int main()
{
    findPrimeFactors(600851475143);
    return 0;
}