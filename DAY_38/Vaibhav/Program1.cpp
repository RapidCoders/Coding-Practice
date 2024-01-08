/*
Q.1 Write a program to calculate,
a. area of rectangle
b. perimeter of rectangle
c. check it is square or not

Input:  length = 4.0, breadth = 6.0
Output: Area: 24.0, Perimeter: 20.0, is_square: No.

Input:  length = 7.5, breadth = 7.5
Output: Area: 56.25, Perimeter: 30, is_square: Yes.

Input:  length = 3.0, breadth = 9.0
Output: Area: 27.0, Perimeter: 24.0, is_square: No.

Author: Vaibhav
*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

template <class T>
class Rectangle
{
    T length;
    T breadth;

public:
    Rectangle(T length, T breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }

    T area_of_rect()
    {
        return length * breadth;
    }

    T perimeter_of_rect()
    {
        return 2 * (length + breadth);
    }

    bool is_square()
    {
        return (length == breadth) ? true : false;
    }
};

int main(void)
{
    double x, y;

    cout << "\nEnter the length: ";
    cin >> x;

    cout << "\nEnter the breadth: ";
    cin >> y;

    Rectangle rect(x, y);

    cout << "\nArea of rectangle is: " << rect.area_of_rect() << endl;
    cout << "\nPerimeter of rectangle is: " << rect.perimeter_of_rect() << endl;

    if (rect.is_square())
        cout << "\nIt is square.\n";
    else
        cout << "\nIt is not a square.\n";

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