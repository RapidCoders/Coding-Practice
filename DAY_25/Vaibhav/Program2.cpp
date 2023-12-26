/*
Q.2 Program to calculate the addition of 2 matrices.

Input:
Matrix a = [1, 0, 1]
           [4, 5, 6]
           [1, 2, 3]

Matrix b = [1, 1, 1]
           [2, 3, 1]
           [1, 5, 1]

Output:
Addition of two matrices: [2 1 2]
                          [6 8 7]
                          [2 7 4]

Author: Suyash
*/

#include <iostream>
#include <vector>
#include <stdlib.h>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

void display_addition(int **Matrix1, int **Matrix2, int row, int col)
{
    int i, j;

    cout << "\nAddition is :\n";

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            cout << Matrix1[i][j] + Matrix2[i][j] << " ";
        cout << endl;
    }
}

int main(void)
{
    int i, j, rows, cols;
    int **mat1, **mat2;

    cout << "\nEnter the number of rows: ";
    cin >> rows;

    cout << "\nEnter the number of columns: ";
    cin >> cols;

    mat1 = (int **)malloc(sizeof(int *) * rows);
    mat2 = (int **)malloc(sizeof(int *) * rows);

    for (i = 0; i < cols; i++)
    {
        mat1[i] = (int *)malloc(sizeof(int) * cols);
        mat2[i] = (int *)malloc(sizeof(int) * cols);
    }

    cout << "\nEnter data in Matrix 1: ";
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            cin >> mat1[i][j];
    }

    cout << "\nEnter data in Matrix 2: ";
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            cin >> mat2[i][j];
    }

    display_addition(mat1, mat2, rows, cols);

    return 0;
}
