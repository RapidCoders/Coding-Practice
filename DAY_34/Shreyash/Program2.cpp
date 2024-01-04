
// Q.2 Program to Print Matrix in Z Form.
// Explanation: The Z form includes the elements of the first row, right diagonal, and the last row of the matrix. To print the Z form of the matrix, the rows and columns must be the same.

// Input : {5 9 1}
//         {3 6 7}
//         {4 8 0}

// Output : 5 9 1
//            6
//          4 8 0 
         
// Author: Suyash


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
