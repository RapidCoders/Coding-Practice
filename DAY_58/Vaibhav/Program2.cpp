/*
Q.2 Program to determine whether a given matrix is a sparse matrix

Input:
Matrix a = [4, 0, 0]
           [0, 5, 0]
           [0, 0, 6]
Output:
Given matrix is a sparse matrix

Author: Suyash
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

bool check_sparse(int **matrix, int rows, int cols)
{
    int i, j, count_zeros = 0;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
                count_zeros++;
        }
    }
    if (count_zeros > (rows * cols) / 2)
        return true;
    return false;
}

int main(void)
{
    int i, j, rows, cols;
    int **matrix = nullptr;

    cout << "\nEnter the number of rows: ";
    cin >> rows;

    cout << "\nEnter the number of columns: ";
    cin >> cols;

    matrix = new int *[rows];
    if (matrix == NULL)
        return -1;

    for (i = 0; i < rows; i++)
        matrix[i] = new int[cols];

    cout << "\nEnter the data:\n";
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            cin >> matrix[i][j];
    }

    if (check_sparse(matrix, rows, cols))
        cout << "\nIt is sparse matrix.\n";
    else
        cout << "\nIt is not a sparce matrix.\n";

    return 0;
}
