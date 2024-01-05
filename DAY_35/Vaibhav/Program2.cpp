/*
Q.2 Program to chech whether Matrix is Trace Matrix.

Explaination: The normal of a matrix is the square root of the sum of squares of all the elements of a matrix. For example, consider the following matrix. Normal and Trace of a Matrix in Java
First, we will calculate the sum of the square of each element. 9^2 + 8^2 + 2^2 + 1^2 + 4^2 + 7^2 + 3^2 + 5^2 + 6^2 = 81 + 64 + 4 + 1 + 16 + 49 + 9 + 25 + 36 = 285. Now, calculate the square root of the sum of squares.
√285 = 16.8819430161
The trace of a matrix is the sum of all the elements present in the principal diagonal (upper left to lower right). Note that the matrix must be a square matrix (the number of rows and columns must be the same). It is useful to prove results in linear algebra. For example, consider the following matrix.

Author: Suyash
*/

#include <iostream>
#include <math.h>
using std::cin;
using std::cout;
using std::endl;

void print_trace_normal(int **mat, int row, int col)
{
    int i, j, sum = 0;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            sum += (mat[i][j] * mat[i][j]);
    }

    cout << "\nThe normal of the given matrix is: " << sqrt(sum) << endl;

    sum = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
                sum += mat[i][j];
        }
    }
    cout << "\nThe trace of the given matrix is: " << sum << endl;
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

    print_trace_normal(mat, row, col);

    return 0;
}