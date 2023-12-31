/*
Q.1 Write a program that takes a matrix (2D array) as input and returns its transpose.

Input:
    1 2 3
    4 5 6
    7 8 9

Output:
    1 4 7
    2 5 8
    3 6 9

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int **transpose_matrix(int **mat, int row, int col)
{
    int i, j, k;

    if (row != col)
        return mat;

    for (i = 0; i < row; i++)
    {
        for (j = i, k = i; j < col; j++, k++)
        {
            if (i != j)
                swap(mat[i][j], mat[k][i]);
        }
    }
    return mat;
}

int main(void)
{
    int i, j, row, col;
    int **mat = NULL;

    cout << "\nEnter the number of rows: ";
    cin >> row;

    cout << "\nEnter the number of columns: ";
    cin >> col;

    mat = new int *[row];
    if (mat == NULL)
        return -1;

    for (i = 0; i < row; i++)
        mat[i] = new int[col];

    cout << "\nEnter the data into matrix:\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            cin >> mat[i][j];
    }

    transpose_matrix(mat, row, col);

    cout << "\nMatrix after transpose:\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}