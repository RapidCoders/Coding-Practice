/*
Q.3 Write a program to check the number is Armstrong Number or not.

Explanation:An Armstrong number is a positive m-digit number that is equal to the sum of the mth powers of their digits. It is also known as pluperfect, or Plus Perfect, or Narcissistic number. It is an OEIS sequence A005188. Let’s understand it through an example.

153: 1^3 + 5^3 + 3^3 = 1 + 125+ 27 = 153

125: 1^3 + 2^3 + 5^3 = 1 + 8 + 125 = 134 (Not an Armstrong Number)

1634: 1^4 + 6^4 + 3^4 + 4^4 = 1 + 1296 + 81 + 256 = 1643

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;

int power(int x, int y)
{
    int i, pow = 1;

    for (i = 1; i <= y; i++)
    {
        pow *= x;
    }
    return pow;
}

int digit_counter(int num)
{
    int counter = 0;

    while (num)
    {
        counter++;
        num /= 10;
    }
    return counter;
}

bool check_armstrong(int num)
{
    int sum = 0, temp = num;
    int digit_count = digit_counter(num);

    while (temp)
    {
        sum += power(temp % 10, digit_count);
        temp /= 10;
    }

    if (sum == num)
        return true;
    return false;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    if (check_armstrong(num))
        cout << "\nIt is armstrong number.\n";
    else
        cout << "\nIt is not an armstrong number.\n";

    return 0;
}
