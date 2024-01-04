/*
Q.1 Given a string, find the first non-repeating character and return its index. If it doesn't exist, return -1.

Input: "leetcode"
Output: 0

Input: "loveleetcode"
Output: 2

Author: Vaibhav
*/
#include <iostream>
#include <unordered_map>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int first_non_rep_char(string str)
{
    int i;
    std::unordered_map<int, int> frequency;

    for (char c : str)
        frequency[c]++;

    for (i = 0; i < str.length(); i++)
    {
        if (frequency[str[i]] == 1)
            return i;
    }
    return -1;
}

int main(void)
{
    string s;

    cout << "\nEnter the string: ";
    getline(cin, s);

    cout << "\nFirst non-repeating character is at index: " << first_non_rep_char(s) << endl;

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