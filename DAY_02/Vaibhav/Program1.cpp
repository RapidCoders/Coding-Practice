/*
Q1. Write a program which accept number from the user and return the addition digits.
Input: 3458
Output: 20

Input: 52
Output: 7

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int sum_digits(int num)
{
    int sum = 0;

    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main(void)
{
    int num;

    cout << "Enter the number: ";
    cin >> num;

    cout << "Addition of digits of " << num << " is: " << sum_digits(num);

    return 0;
}
