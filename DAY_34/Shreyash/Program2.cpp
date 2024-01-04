#include<iostream>
using namespace std;

void zpatt(int mat1[3][3],int const row,int const col)
{
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            if(i == 0||i == row-1||i == j)
            {
                cout<<mat1[i][j]<<" ";
            }else{
                cout<<"  ";
            }

        }
        cout<<endl;
    }
}

int main()
{
    int const row = 3;
    int const col = 3;
    int mat1[3][3];
    cout<<"Enter Data In Matrix: ";
    for(int i = 0;i<row;i++){
        for(int j = 0;j < col;j++)
        {
            cin>>mat1[i][j];
        }
        
    }
    zpatt(mat1,row,col);
    
    return 0;
}
