/*
Q.3 Write a Program to print given star pattern.

Input: n = 10
Output:

*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print_pattern(int num)
{
    int i, j;

    for (i = 1; i <= num / 2; i++)
    {
        for (j = 1; j <= num; j++)
        {
            if (j <= i || j >= (num - i) + 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    for (i = num / 2; i >= 1; i--)
    {
        for (j = 1; j <= num; j++)
        {
            if (j <= i || j >= (num - i) + 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    print_pattern(num);

    return 0;
}
