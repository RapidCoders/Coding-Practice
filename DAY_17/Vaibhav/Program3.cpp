/*
Q.3 Write a program to print given pattern.

Input : row = 5 col = 5
Output :
A       A 
B B     B 
C   C   C 
D     D D 
E       E

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print_pattern(int row, int col)
{
    int i;
    char c;

    cout << endl;
    for (c = 'A'; c < row + 'A'; c++)
    {
        for (i = 1; i <= col; i++)
        {
            if (i == 1 || i == col || i == c - 'A' + 1)
                cout << c << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main(void)
{
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    print_pattern(rows, cols);

    return 0;
}
