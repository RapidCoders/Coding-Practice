/*
Q.1 Write a program which accept rows and columns and display below pattern.

Input : 5  5
Output :

*
*  *
*  *  *
*  *  *  *
*  *  *  *  *
*  *  *  *  *  *
*  *  *  *  *
*  *  *  *
*  *  *
*  *
*

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void display_pattern(int row, int col)
{
    int i, j;

    if (row != col)
        return;

    cout << endl;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if (i >= j)
                cout << "* ";
        }
        cout << endl;
    }

    for (i = 2; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if (i <= j)
                cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int row, col;

    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of columns: ";
    cin >> col;

    display_pattern(row, col);

    return 0;
}
