/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/
/*!
 *\author Anath
 *\date January 2023
 */

#include <iostream>
#include <vector>
int main()
{
    int largest{0};
    for (int i = 0; i <= 999; i++)
    {
        for (int j = 0; j <= 999; j++)
        {
            int num = i * j;
            int n{0};
            int rev{0};
            int digit{0};
            n = num;
            do
            {
                digit = num % 10;
                rev = (rev * 10) + digit;
                num = num / 10;
            } while (num != 0);

            if (n == rev)
            {
                if (n > largest)
                    largest = n;
            }
        }
    }
    std::cout << largest << std::endl;
    return 0;
}