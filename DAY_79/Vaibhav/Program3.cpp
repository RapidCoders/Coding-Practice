/*
Q.3 Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2
Since 2 has only one digit, return it.

Input: num = 0
Output: 0

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;

int add_digits(int num) 
{
    int sum;

    while (1)
    {
        sum = 0;

        while (num != 0)
        {
            sum += (num % 10);
            num /= 10;
        }
        if (sum < 10)
            return sum;
        num = sum;
    }
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    cout << "\nAddition of digits till the result is having only one digit is: " << add_digits(num) << '\n';

    return 0;
}
