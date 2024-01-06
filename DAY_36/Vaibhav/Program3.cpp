/*
Q.3 Program to Calculate HCF (Highest Common Factor) of Two Numbers.

Input:   num1 = 36
         num2 = 60
Output: 12

Input:   num1 = 56
         num2 = 12
Output: 4

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int hcf(int num1, int num2)
{
    int i;

    if (num1 < num2)
        i = num1 / 2;
    else
        i = num2 / 2;

    while (i >= 0)
    {
        if (num1 % i == 0 && num2 % i == 0)
            return i;
        i--;
    }
    return -1;
}

int main(void)
{
    int num1, num2;

    cout << "\nEnter the first number: ";
    cin >> num1;

    cout << "\nEnter the second number: ";
    cin >> num2;

    cout << "\nHCF of " << num1 << " and " << num2 << " is: " << hcf(num1, num2) << endl;

    return 0;
}