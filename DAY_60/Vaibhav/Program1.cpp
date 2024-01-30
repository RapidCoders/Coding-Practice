/*
Q.1 You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

Input:
matrix = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9]
]
Output:
[
  [7, 4, 1],
  [8, 5, 2],
  [9, 6, 3]
]

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void swap(int *a, int *b)
{
    if (a == b) // if pointing to same memory
        return;

    (*a) = (*a) + (*b);
    (*b) = (*a) - (*b);
    (*a) = (*a) - (*b);
}

int **rotate_matrix(int **matrix, int size)
{
    int i, j, k, l;

    for (i = 0, j = size - (1 + i); i < size - 1; i++, j--)
    {
        for (k = 0, l = size - 1; k < size - i; k++, l--)
            swap(&matrix[i][k], &matrix[l][j]);
    }

    for (i = 0, j = (size - 1); i < (size / 2); i++, j--)
    {
        for (k = 0; k < size; k++)
            swap(&matrix[i][k], &matrix[j][k]);
    }

    return matrix;
}

int main(void)
{
    int i, j, size;
    int **matrix = NULL;

    cout << "\nEnter the size of matrix: ";
    cin >> size;

    matrix = new int *[size];
    if (matrix == NULL)
        return -1;

    for (i = 0; i < size; i++)
    {
        matrix[i] = new int[size];

        if (matrix[i] == NULL)
            return -1;
    }

    cout << "\nEnter the data into matrix:\n";
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            cin >> matrix[i][j];
    }

    rotate_matrix(matrix, size);

    cout << "\nRotated matrix is:\n";
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            cout << matrix[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}
