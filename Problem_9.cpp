/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/
/*!
 *\author Anath
 *\date February 2023
 */

#include <iostream>

int pythagoreanTriplet(){
    int results;
    for(int a = 1; a < 1001; a++)
    {
        for(int b = 1; b < 1001; b++)
        {
            int c = 1000 - a - b;
            if( c < 0) break;
            if((a*a + b*b) == (c*c)) results = a*b*c;
        }
    }
    return results;
}

int main() 
{
    std::cout << pythagoreanTriplet() << std::endl; //31875000
    return 0;
}