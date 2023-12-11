/*
Q2. Write a program to count number of digits in given number.
Input: 4365
Output: Number of digits are 4.

Input: 125
Output: Number of digits are 3.

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int count_digits(int num)
{
    int digit_count = 0;

    while (num != 0)
    {
        digit_count++;
        num /= 10;
    }
    return digit_count;
}

int main(void)
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Number of digits in " << n << " is " << count_digits(n) << endl;   

    return 0;
}
