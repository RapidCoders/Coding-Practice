/*
Q1. Write a program which accept rows and numbers of column from user and display below pattern.

Input : row = 3, col = 5
Output :
5   4   3   2   1
5   4   3   2   1
5   4   3   2   1

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print_pattern(int row, int col)
{
    int i, j;

    for (i = 1; i <= row; i++)
    {
        for (j = col; j >= 1; j--)
            cout << j << " ";
        cout << endl;
    }
}

int main(void)
{
    int row, col;

    cout << "Enter the number of rows and number of columns: ";
    cin >> row >> col;

    print_pattern(row, col);

    return 0;
}
