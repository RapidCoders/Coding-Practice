/*
Q.1 Write a program which accept rows and numbers of column from user and display below pattern.

Input : row = 6, col = 6
Output :

*  *  *  *  *  *   
*           *  *
*        *     *
*     *        *
*  *           *
*  *  *  *  *  *

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print_pattern(int row, int col)
{
    int i, j;

    if (row != col)
        return;

    for (i = row; i >= 1; i--)
    {
        for (j = 1; j <= col; j++)
        {
            if (i == 1 || i == row || j == 1 || j == col || i == j)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main(void)
{
    int row, col;

    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of columns: ";
    cin >> col;

    print_pattern(row, col);

    return 0;
}
