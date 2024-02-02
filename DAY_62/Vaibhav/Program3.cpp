/*
Q.3 Find the Armstrong Numbers in a given Interval.

Input: low = 100, high = 400
Output: 153 370 371

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;

int count_digits(int num)
{
    int count = 0;

    while (num)
    {
        count++;
        num /= 10;
    }
    return count;
}

int power(int x, int y)
{
    int i, pow = 1;

    for (i = 1; i <= y; i++)
        pow *= x;
    return pow;
}

void print_armstrong_btwn_interval(int low, int high)
{
    int sum, temp, exponent;

    cout << "\nArmstrong numbers between " << low << " and " << high << " are: ";
    while (low <= high)
    {
        sum = 0;
        temp = low;
        exponent = count_digits(temp);

        while (temp)
        {
            sum += power(temp % 10, exponent);
            temp /= 10;
        }

        if (low == sum)
            cout << low << ' ';
        low++;
    }
    cout << '\n';
}

int main(void)
{
    int low, high;

    cout << "\nEnter the low point: ";
    cin >> low;

    cout << "\nEnter the high point: ";
    cin >> high;

    print_armstrong_btwn_interval(low, high);

    return 0;
}
