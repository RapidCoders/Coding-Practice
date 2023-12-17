/*
Q.3 Write a program to print given pattern.

Input : row = 7 col = 7
Output :

* * * * * * * 
      *
      *
      *
      *
      *
      *

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void display_pattern(int row, int col)
{
    int i, j;

    if (col % 2 == 0)
        return;

    cout << endl;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if (i == 1 || j == ((col / 2) + 1))
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

    cout << "Enter the number of cols: ";
    cin >> cols;

    display_pattern(rows, cols);

    return 0;
}
