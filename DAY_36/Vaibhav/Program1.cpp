/*
Q.1 Write a program to determine if a given matrix is symmetric. A matrix is symmetric if it is equal to its transpose.

Input:  [1, 2, 3]
        [2, 4, 5]
        [3, 5, 6]
Output: True.

Input:  [1, 2, 3]
        [2, 4, 5]
        [3, 5, 6]
        [4, 8, 9]
Output: False.

Input:  [1, 2, 3]
        [2, 1, 0]
        [3, 0, 1]
Output: True.

Input:  [1, 2, 3]
        [4, 5, 6]
        [7, 8, 9]
Output: False.

Author: Vaibhav
*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_symmetric(int **mat, int row, int col)
{
    int i, j;

    if (row != col)
        return false;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (mat[i][j] != mat[j][i])
                return false;
        }
    }
    return true;
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

    if (check_symmetric(mat, row, col))
        cout << "\nIt is a symmetric matrix.\n";
    else
        cout << "\nIt is not a symmetric matrix.\n";

    return 0;
}
