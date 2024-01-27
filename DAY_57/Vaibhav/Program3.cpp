/*
Q.3 Write a program to check the number is spy number or not.

Input: num = 1124
Output:True

Explanation :
A positive integer is called a spy number if the sum and product of its digits are equal. In other words, a number whose sum and product of all digits are equal is called a spy number.

1+1+2+4 = 8
1*1*2*4 = 8

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;

bool check_spy(int num)
{
    int sum = 0, digit, product = 1;

    while (num)
    {
        digit = num % 10;
        sum += digit;
        product *= digit;
        num /= 10;
    }
    
    if (sum == product)
        return true;
    return false;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    if (check_spy(num))
        cout << "\nIt is spy number.\n";
    else
        cout << "\nIt is not a spy number.\n";

    return 0;
}
