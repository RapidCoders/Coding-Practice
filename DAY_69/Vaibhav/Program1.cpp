/*
Q.1 Write a program which takes input from the user and print the below pattern.

Input: 5
Output:
1  2  3  4  5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;

void print_pattern(int num)
{
    int i, j, k, counter = 1, **matrix = new int *[5];
    if (matrix == nullptr)
        return;

    for (i = 0; i < num; i++)
    {
        matrix[i] = new int[5];
        if (matrix[i] == nullptr)
            return;
    }

    for (i = 0; i < num; i++)
    {
        for (k = i; k < num - i; k++)
            matrix[i][k] = counter++;
        counter--;

        for (k = i; k < num - i; k++)
            matrix[k][(num - i) - 1] = counter++;
        counter--;

        for (k = (num - i) - 1; k >= (0 + i); k--)
            matrix[(num - i) - 1][k] = counter++;
        counter--;

        for (k = (num - i) - 1; k >= (0 + i) + 1; k--)
            matrix[k][i] = counter++;
    }

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            if (matrix[i][j] >= 1 && matrix[i][j] <= 9)
                cout << matrix[i][j] << "  ";
            else
                cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    print_pattern(num);

    return 0;
}
