/*
Q.3 Write a program to print given pattern.

Input : 7
Output :
        1
        2*2
        3*3*3
        4*4*4*4
        3*3*3
        2*2
        1

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print_pattern(int num)
{
    int i, j;

    cout << endl;
    for (i = 1; i <= (num / 2) + 1; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == 1 || j == i)
                cout << i;
            else
                cout << i << "*";
        }
        cout << endl;
    }

    for (i = (num / 2); i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == 1 || j == i)
                cout << i;
            else
                cout << i << "*";
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