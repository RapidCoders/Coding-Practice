/*
Q.1 Write a program that takes an integer n as input and prints a pattern based on the following rules:
a) The pattern contains n rows.
b) In each row, print the numbers from 1 to the row number.
c) Repeat the numbers in reverse order after reaching the row number.

Input: 4

Output:
1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print_pattern(int num)
{
    int i, j, x;

    for (i = 1; i <= num; i++)
    {
        x = 0;
        for (j = 1; j <= i + i - 1; j++)
        {
            if (j > i)
                cout << --x << " ";
            else
                cout << ++x << " ";
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
