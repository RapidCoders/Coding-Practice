/*
Q.3 Write an algorithm to determine if a number n is happy Return true if n is a happy number, and false if not.

Input: n = 19
Output: true

Explanation:
1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1

Input: n = 2
Output: false

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int power(int num, int pow)
{
    int i, result = 1;

    for (i = 0; i < pow; i++)
        result *= num;
    return result;
}

bool check_happy(int num)
{
    int sum = 0;

    while (sum != 4)
    {
        sum = 0;

        while (num)
        {
            sum += power(num % 10, 2);
            num /= 10;
        }

        num = sum;

        if (sum == 1)
            return true;
    }
    return false;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    if (check_happy(num))
        cout << "\nIt is happy number.\n";
    else
        cout << "\nIt is not a happy number.\n";

    return 0;
}
