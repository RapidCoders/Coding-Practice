/*
Q.2 Program to determine whether a given matrix is an identity matrix.
Explanation : A matrix is said to be the identity matrix if it is the square matrix in which elements of principle diagonal are ones, and the rest of the elements are zeroes.

Input:
Matrix a =[1, 0, 0]  
          [0, 1, 0]  
          [0, 0, 1]  

Output: Given matrix is an identity matrix

Author: Suyash
*/

#include <iostream>
#include <stdlib.h>
using std::cin;
using std::cout;
using std::endl;

bool check_identity(int **mat, int row, int col)
{
    int i, j;

    if (row != col)
        return false;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (((i == j) && (mat[i][j] != 1)) || ((i != j) && (mat[i][j] != 0)))
                return false;
        }
    }
    return true;
}

int main(void)
{
    int i, j, rows, cols;
    int **mat;

    cout << "\nEnter the number of rows: ";
    cin >> rows;

    cout << "\nEnter the number of columns: ";
    cin >> cols;

    mat = (int **)malloc(sizeof(int *) * rows);

    for (i = 0; i < cols; i++)
        mat[i] = (int *)malloc(sizeof(int) * cols);

    cout << "\nEnter data in Matrix: ";
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            cin >> mat[i][j];
    }

    if (check_identity(mat, rows, cols))
        cout << "\nIt is an identity matrix.\n";
    else
        cout << "\nIt is not an identity matrix.\n";

    return 0;
}