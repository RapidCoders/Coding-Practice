/*
Q.3 write a Program to find the sum of each row and each column of a matrix.
Input :
     int a[][] = {
                        {1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}
                    };
Output :

Sum of 1 row: 6
Sum of 2 row: 15
Sum of 3 row: 24
Sum of 1 column: 12
Sum of 2 column: 15
Sum of 3 column: 18

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;

void print_sum(int **matrix, int row, int col)
{
    int i, j, sum;

    for (i = 0; i < row; i++)
    {
        sum = 0;

        for (j = 0; j < col; j++)
            sum += matrix[i][j];
        cout << "\nSum of " << i + 1 << " row: " << sum;
    }

    for (i = 0; i < row; i++)
    {
        sum = 0;

        for (j = 0; j < col; j++)
            sum += matrix[j][i];
        cout << "\nSum of " << i + 1 << " column: " << sum;
    }
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

    print_sum(matrix, rows, cols);

    return 0;
}
