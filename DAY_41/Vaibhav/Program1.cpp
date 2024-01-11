/*
Q.1 Write a program to implement a function that finds the maximum product of two integers in an array of integers. The array may contain both positive and negative integers.

Input: [1, 2, 3, 4, 5]
Output: 20

Input:  [-10, -3, 5, 2, -9]
Output: 90

Input:  [-5, -4, 2, 8, 1]
Output: 20

Input:  [4, -2, 8, -1, 3]
Output: 32

Author: Vaibhav
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int max_product_of_two_nums(const vector<int> nums)
{
    int max = nums[0] * nums[1];

    for (int i : nums)
    {
        for (int j : nums)
        {
            if (i != j)
            {
                if (max < (i * j))
                    max = (i * j);
            }
        }
    }
    return max;
}

int main(void)
{
    int i, x, n;
    vector<int> nums;

    cout << "\nEnter the number of elements: ";
    cin >> n;

    cout << "\nEnter the data: ";
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    cout << "\nMaximum product of two numbers from the array is: " << max_product_of_two_nums(nums) << endl;

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
