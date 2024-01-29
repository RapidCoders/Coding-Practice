// Q.2 Program to determine whether a given matrix is a sparse matrix
// Input:
// Matrix a = [4, 0, 0]  
//            [0, 5, 0]  
//            [0, 0, 6]  
// Output:
// Given matrix is a sparse matrix
// Author: Suyash

#include<iostream>
using namespace std;

void sparse_or_not(int mat1[3][3], const int row, const int col)
{
    int zero_counter = 0;
    int num_counter = 0;
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            if(mat1[i][j] == 0)
                {
                    zero_counter++;
                }
                else{
                    num_counter++;
                }
        }
        
    }
    if(zero_counter > num_counter)
    {
        cout<<"Given matrix is an sparse matrix";
    }
    else
    {
        cout<<"Given matrix is an not sparse matrix";
    }
}

int main()
{
    int const row = 3;
    int const col = 3;
    int mat1[row][col];
    cout<<"Enter Data of Matrix One :";
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            cin>>mat1[i][j];
        }
    }
    sparse_or_not(mat1, row, col);
    

    return 0;
}



