/*
Q.1 Write a program to count the number of set bits (1s) in the binary representation of a given non-negative integer.

Input:  0
Output: 0

Input:  7
Output: 3

Input:  123
Output: 6

Input:  1024
Output: 1

Input:  65535
Output: 16

Author: Vaibhav
*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int count_set_bits(int num)
{
    int mask = 1, count = 0;

    while (num)
    {
        if (num & mask)
            count++;
        num >>= 1;
    }
    return count;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    cout << "\nCount of set bits in number " << num << " is " << count_set_bits(num) << '\n';

    return 0;
}

// /*
// Q.1 You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

// Input:
// matrix = [
//   [1, 2, 3],
//   [4, 5, 6],
//   [7, 8, 9]
// ]
// Output:
// [
//   [7, 4, 1],
//   [8, 5, 2],
//   [9, 6, 3]
// ]

// Author: Vaibhav
// */

// #include <iostream>
// using std::cin;
// using std::cout;
// using std::endl;

// void swap(int &a, int &b)
// {
//     a = a + b;
//     b = a - b;
//     a = a - b;
// }

// int **rotate_matrix(int **mat, int row, int col)
// {
//     int i, j, k;

//     for (i = 0; i < row; i++)
//     {
//         for (j = col - 1, k = 0; j >= 0; j--, k++)
//         {
//             swap(mat[i][j], mat[k][i]);
//         }
//         cout << endl;
//     }

//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             cout << mat[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main(void)
// {
//     int i, j, row, col;
//     int **mat = NULL;

//     cout << "\nEnter the number of rows: ";
//     cin >> row;

//     cout << "\nEnter the number of columns: ";
//     cin >> col;

//     mat = new int *[row];
//     if (mat == NULL)
//         return -1;

//     for (i = 0; i < row; i++)
//     {
//         mat[i] = new int[col];

//         if (mat[i] == NULL)
//             return -1;
//     }

//     cout << "\nEnter the data into matrix:\n";
//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//             cin >> mat[i][j];
//     }

//     rotate_matrix(mat, row, col);

//     return 0;
// }