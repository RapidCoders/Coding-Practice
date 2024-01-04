/*
Q.2 Program to Print Matrix in Z Form.
Explanation: The Z form includes the elements of the first row, right diagonal, and the last row of the matrix. To print the Z form of the matrix, the rows and columns must be the same.

Input : {5 9 1}
        {3 6 7}
        {4 8 0}

Output : 5 9 1
           6
         4 8 0

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print_Z(int **mat, int row, int col)
{
    int i, j;

    if (row != col)
        return;

    cout << "\nMatrix in the Z form :\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == 0 || i == row - 1 || j == row - i - 1)
                cout << mat[i][j] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main(void)
{
    int **mat = NULL;
    int i, j, row, col;

    cout << "\nEnter the number of rows: ";
    cin >> row;

    cout << "\nEnter the number of columns: ";
    cin >> col;

    mat = new int *[row];
    if (mat == NULL)
        return -1;

    for (i = 0; i < row; i++)
        mat[i] = new int[col];

    cout << "\nEnter the data:\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            cin >> mat[i][j];
    }

    print_Z(mat, row, col);

    return 0;
}