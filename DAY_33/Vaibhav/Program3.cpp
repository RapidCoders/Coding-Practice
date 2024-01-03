/*
Q.3 Write a Program to find the frequency of odd & even numbers in the given matrixt.
Input:  a[][] = {
                        {4, 1, 3},
                        {3, 5, 7},
                        {8, 2, 6}
                };
Output:
Frequency of odd numbers: 5
Frequency of even numbers: 4

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void display_even_odd(int **mat, int row, int col)
{
    int i, j, count_odd = 0, count_even = 0;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (mat[i][j] % 2 != 0)
                count_odd++;
            if (mat[i][j] % 2 == 0)
                count_even++;
        }
    }

    cout << "\nFrequnecy of odd numbers: " << count_odd << endl;
    cout << "\nFrequnecy of even numbers: " << count_even << endl;
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

    display_even_odd(mat, row, col);

    return 0;
}