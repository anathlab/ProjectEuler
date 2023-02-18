/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/
/*!
 *\author Anath
 *\date January 2023
 */

#include <iostream>

int largestPalindromeProduct()
{
    int largest{0};
    for (int i = 0; i <= 999; i++)
    {
        for (int j = 0; j <= 999; j++)
        {
            int number = i * j;
            int copy{0};
            int reverse{0};
            int digit{0};
            copy = number;
            do
            {
                digit = number % 10;
                reverse = (reverse * 10) + digit;
                number = number / 10;
            } while (number != 0);

            if (copy == reverse)
            {
                if (copy > largest)
                    largest = copy;
            }
        }
    }
    return largest;
}

int main()
{
    std::cout << largestPalindromeProduct() << std::endl; //906609
    return 0;
}