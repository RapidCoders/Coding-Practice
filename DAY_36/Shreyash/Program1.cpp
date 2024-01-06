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
