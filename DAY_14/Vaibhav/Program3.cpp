/*
Q.3 Write a program to print given pattern.

Input: 7  7
Output:
*  *  *  *  *  *  *
*  *           *  *
*     *     *     *
*        *        *
*    *      *     *
*  *           *  *
*  *  *  *  *  *  *

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void display_pattern(int row, int col)
{
    int i, j, k;

    if (row != col)
        return;

    cout << endl;
    for (i = 1; i <= row; i++)
    {
        for (j = 1, k = col; j <= col || k >= 1; j++, k--)
        {
            if (i == 1 || i == row || j == 1 || j == col || i == j || i == k)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main(void)
{
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    display_pattern(rows, cols);

    return 0;
}
