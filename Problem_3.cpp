/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
/*!
 *\author Anath
 *\date January 2023
 */

#include <iostream>

int LargestPrimeFactor(unsigned long long number)
{
 for (long i = 2; i < number; ++i)
    {
        while (number % i == 0)
        {
            number = number / i;
        }
    }
    return number;
}

int main()
{
    std::cout << LargestPrimeFactor(600851475143) << std::endl; //6857
    return 0;
}