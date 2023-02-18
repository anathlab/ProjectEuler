/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/
/*!
 *\author Anath
 *\date January 2023
 */

#include <iostream>

unsigned int MultiplesOfThreeOrFive(int maxRange)
{
    unsigned int sum {0};
    for (int i = maxRange - 1; i > 0; i--)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

int main()
{
    std::cout << MultiplesOfThreeOrFive(1000) << std::endl; //233168
    return 0;
}
