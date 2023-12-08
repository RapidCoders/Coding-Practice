/*
Q3. Write a Program for Printing Incrementing Number Square Pattern.

Input : row = 4, col = 6
Output:

1 1 1 1 1 1 
2 2 2 2 2 2
3 3 3 3 3 3
4 4 4 4 4 4

Author: Shreyash
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
        for (j = 1; j <= col; j++)
            cout << i << " ";
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
