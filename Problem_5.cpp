/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>
int main()
{
    int i{20};
    int j{20};
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
            j = j + 20;
            i = 20;
            counter = 0;
        }
    }
    std::cout << j << std::endl;
}
