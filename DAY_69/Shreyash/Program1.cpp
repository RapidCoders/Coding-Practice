// Q.1 Write a program which takes input from the user and print the below pattern.
// Input: 5
// Output:
// 1  2  3  4  5
// 16 17 18 19 6
// 15 24 25 20 7
// 14 23 22 21 8
// 13 12 11 10 9
// Author: Vaibhav
#include<iostream>
using namespace std;

void pattern(int num)
{
    int mat[num][num];

    int row = 0;
    int rowend = num - 1;
    int col = 0;
    int colend = num - 1;
    int count = 1;

    while (row <= rowend && col <= colend)
    {
	// direction ---->
        for (int i = col; i <= colend; i++)
        {
            mat[row][i] = count++;
        }
        row++;

	// direction v
        for (int i = row; i <= rowend; i++)
        {
            mat[i][colend] = count++;
        }
        colend--;
	// direction <----
        if (row <= rowend)
        {
            for (int i = colend; i >= col; i--)
                mat[rowend][i] = count++;

            rowend--;
        }
	// direction ^
        if (col <= colend)
        {
            for (int i = rowend; i >= row; i--)
                mat[i][col] = count++;

            col++;
        }
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if(i == 0)
			{
				cout << mat[i][j] << "  ";
			}
			else
			{
				cout << mat[i][j] << " ";
			}
        }
        cout << endl;
    }
}

int main()
{
    const int num = 5;
    pattern(num);
    return 0;
}
