/*
Q.1 Write a program which accept rows and numbers of column from user and display below pattern.

Input : row = 7, col = 7
Output :
         *
        *  *
      *  *  *
     *  *  *  *
   *  *  *  *  *
  *  *  *  *  *  *
*  *  *  *  *  *  *

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void pattern_print(int row, int col)
{
    int i, j;

    if (row != col)
        return;

    for (i = 1; i <= row; i++)
    {
        for (j = col; j >= 1; j--)
        {
            if (i >= j)
                cout << "* ";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int row, col;

    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of cols: ";
    cin >> col;

    pattern_print(row, col);

    return 0;
}
