/*
Q.3 Program to determine whether two matrices are equal.

Input:   a[][] = {
                        {1, 2, 3},
                        {8, 4, 6},
                        {4, 5, 7}
                  };
         b[][] = {
                        {1, 2, 3},
                        {8, 4, 6},
                        {4, 5, 7}
                  };
Output: True.

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_equal(int **mat1, int **mat2, int row, int col)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (mat1[i][j] != mat2[i][j])
                return false;
        }
    }
    return true;
}

int main(void)
{
    int i, j, row, col;
    int **mat1 = NULL, **mat2 = NULL;

    cout << "\nEnter the number of rows: ";
    cin >> row;

    cout << "\nEnter the number of columns: ";
    cin >> col;

    mat1 = new int *[row];
    mat2 = new int *[row];
    if (mat1 == NULL || mat2 == NULL)
        return -1;

    for (i = 0; i < row; i++)
    {
        mat1[i] = new int[col];
        mat2[i] = new int[col];

        if (mat1[i] == NULL || mat2[i] == NULL)
            return -1;
    }

    cout << "\nEnter the data into first matrix:\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            cin >> mat1[i][j];
    }

    cout << "\nEnter the data into second matrix:\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            cin >> mat2[i][j];
    }

    if (check_equal(mat1, mat2, row, col))
        cout << "\nBoth matrices are equal.\n";
    else
        cout << "\nBoth matrices are not equal.\n";

    return 0;
}