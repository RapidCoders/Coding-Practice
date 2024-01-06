// Q.1 Write a program to determine if a given matrix is symmetric. A matrix is symmetric if it is equal to its transpose.
// Input:  [1, 2, 3]
//         [2, 4, 5]
//         [3, 5, 6]
// Output: True.

// Input:  [1, 2, 3]
//         [2, 4, 5]
//         [3, 5, 6]
//         [4, 8, 9]
// Output: False.

// Input:  [1, 2, 3]
//         [2, 1, 0]
//         [3, 0, 1]
// Output: True.

// Input:  [1, 2, 3]
//         [4, 5, 6]
//         [7, 8, 9]
// Output: False.
// Author: Vaibhav


Q.3 Program to Calculate HCF of Two Number.
Input:   num1 = 36
         num2 = 60

Output: 12

Input:   num1 = 56
         num2 = 12

Output: 4

Author: Shreyash

#include<iostream>
using namespace std;

bool symmetric(int mat[3][3],int row,int col)
{
   int count = 0;
   int transmat[3][3];
   for(int j = 0;j<row;j++)
   {
        for(int i = 0;i<col;i++)
        {
            transmat[j][i] = mat[i][j];
        }
    }

    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            if(mat[i][j] == transmat[i][j]){
                count++;
            }
        }
    }
    if(count == row*col){
        return true;
    }

    return false;
}





int main()
{
    int mat[3][3];
    int row = 3;
    int col = 3;
    cout<<"Input Data in matrix :";
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++)
        {
            cin>>mat[i][j];
        }
    }
    if(symmetric(mat,row,col))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}
