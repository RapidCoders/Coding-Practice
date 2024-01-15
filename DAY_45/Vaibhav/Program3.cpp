/*
Q.3 Write a program to count the digits of a given number using recursion.

Input: n = 15
Output: 2

Input: n = 3773
Output: 4

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int count_digits(int num)
{
    if (num == 0)
        return 0;
    return 1 + count_digits(num / 10);
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    cout << "\nCount of digits is: " << count_digits(num) << endl;

    return 0;
}
