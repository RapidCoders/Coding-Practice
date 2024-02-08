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

        for (int i = col; i <= colend; i++)
        {
            mat[row][i] = count++;
        }
        row++;


        for (int i = row; i <= rowend; i++)
        {
            mat[i][colend] = count++;
        }
        colend--;

        if (row <= rowend)
        {
            for (int i = colend; i >= col; i--)
                mat[rowend][i] = count++;

            rowend--;
        }

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
