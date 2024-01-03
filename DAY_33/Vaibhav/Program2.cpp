/*
Q.2 Write a method to determine and return whether a given matrix is a sparse matrix.
Explanation: A matrix is said to be sparse matrix if most of the elements of that matrix are 0. It implies that it contains very less non-zero elements. To check whether the given matrix is the sparse matrix or not, we first count the number of zero elements present in the matrix. Then calculate the size of the matrix. For the matrix to be sparse, count of zero elements present in an array must be greater than size/2.

Given Matrix : {4  0  0}
               {0  5  0}
               {0  0  6}

Number of zeroes present in above matrix is 6 and size of the matrix is 3 * 3 = 9.
Since, 6 > 4.5 that means, most elements of given array are zero.
Hence, the above matrix is a sparse matrix.

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_sparse(int **mat, int row, int col)
{
    int i, j, count_zeros = 0;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (mat[i][j] == 0)
                count_zeros++;
            if (count_zeros > (row * col) / 2)
                return true;
        }
    }
    return false;
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

    if (check_sparse(mat, row, col))
        cout << "\nIt is a sparse matrix.\n";
    else
        cout << "\nIt is not a sparse matrix.\n";

    return 0;
}