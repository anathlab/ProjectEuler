/*
The sum of the squares of the first ten natural numbers is,
1^2+2^2+...+10^2=385
The square of the sum of the first ten natural numbers is,
(1+2+...+10)^2=55^2=3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is
3025−385=2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
/*!
 *\author Anath
 *\date January 2023
 */

#include <iostream>

unsigned int sumOfTheSquares(int quantity)
{
    unsigned int sum{0};
    for (int i = 1; i <= quantity; i++)
    {
        sum = sum + (i * i);
    }
    return sum;
}

unsigned int squareOfTheSum(int quantity)
{
    unsigned int sum{0};
    for (int i = 1; i <= quantity; i++)
    {
        sum = sum + i;
    }
    return sum * sum;
}

int main()
{
    std::cout << squareOfTheSum(100) - sumOfTheSquares(100) << std::endl; //25164150
    return 0;
}