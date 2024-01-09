/*
Q.2 Write a method to check and return whether given number is Spy Number or not.
Explanation:
A positive integer is called a spy number if the sum and product of its digits are equal.
In other words, a number whose sum and product of all digits are equal is called a spy number.

Example:
Let's take the number 1124 and check whether the number is a spy or not.
First, we will split it into digits (1, 1, 2, 4). After that find the sum and product of all the digits.
  Sum = 1 + 1 + 2 + 4 = 8
  Product = 1 * 1 * 2 * 4 = 8
We observe that the sum and product of the digits both are equal. Hence, 1124 is a spy number.

Input  : 132
Output : Spy number.

Input  : 217
Output : Not a Spy Number.

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_spy(int num)
{
    int summation = 0, multiplication = 1, digit;

    while (num)
    {
        digit = num % 10;
        summation += digit;
        multiplication *= digit;
        num /= 10;
    }
    if (summation == multiplication)
        return true;
    return false;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    if (check_spy(num))
        cout << "\nIt is a spy number.\n";
    else
        cout << "\nIt is not a spy number.\n";

    return 0;
}
