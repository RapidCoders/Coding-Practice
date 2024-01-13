/*
Q.2 Write a program to find the quotient and remainder of given number.

Input: Enter the numbers: 34  3

Output:
Quotient when 34/3 is: 11
Remainder when 34 is divided by 3 is: 1

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int num1, num2;

    cout << "\nEnter the divident: ";
    cin >> num1;

    cout << "\nEnter the divisor: ";
    cin >> num2;

    cout << "\nQuotient when " << num1 << "/" << num2 << " is: " << num1 / num2 << endl;
    cout << "\nRemainder when " << num1 << " is divided by " << num2 << " is: " << num1 % num2 << endl;

    return 0;
}
