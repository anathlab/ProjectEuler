/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
/*!
 *\author Anath
 *\date January 2023
 */

#include <iostream>

void smallestPositiveNumberEvenlyDivisibleByRange(int range)
{
    int i{range};
    int j{range};
    int counter{0};
    while (i != 0)
    {
        while (i != 0 && j % i == 0)
        {
            counter++;
            i--;
        }
        if (i != 0 && j % i != 0)
        {
            j = j + range;
            i = range;
            counter = 0;
        }
    }
    std::cout << j << std::endl;
}

int main()
{
    smallestPositiveNumberEvenlyDivisibleByRange(20); //232792560
    return 0;
}
