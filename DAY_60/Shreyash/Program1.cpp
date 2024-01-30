#include<iostream>
using namespace std;

void rotate(int mat[3][3],int row,int col)
{
    for(int i = 0;i < row;i++)
    {
        for(int j = col-1;j >= 0;j--)
        {
            cout << mat[j][i] <<" ";
        }
        cout<<endl;
    }

}


int main()
{
    int const row = 3;
    int const col = 3;
    int mat[row][col];
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            cin >> mat[i][j];
        }
    }

    rotate(mat,row,col);
    return 0;
}
