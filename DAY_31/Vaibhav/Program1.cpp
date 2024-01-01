/*
Q.1 Write a program that prints swastika pattern.

Input: 7
Output:

*     * * * *
*     *
*     *
* * * * * * *
      *     *
      *     *
* * * *     *

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print_pattern(int num)
{
    int i, j;

    if (num % 2 == 0)
        return;

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num; j++)
        {
            if (i == (num / 2) + 1 || j == (num / 2) + 1 || (i == 1 && j > num / 2) || (i == num && j <= num / 2) || (j == 1 && i <= num / 2) || (j == num && i > num / 2))
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

    cout << "Enter the number: ";
    cin >> num;

    print_pattern(num);

    return 0;
}