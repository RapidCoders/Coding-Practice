// Q.2 Program to calculate the addition of 2 matrices.
// Input:
// Matrix a = [1, 0, 1]  
//            [4, 5, 6]  
//            [1, 2, 3]  
   
// matrix b = [1, 1, 1]  
//            [2, 3, 1]  
//            [1, 5, 1]  

// Output:
// Addition of two matrices: [2 1 2]
//                           [6 8 7]
//                           [2 7 4]
// Author: Suyash

#include<iostream>
using namespace std;

void summ(int mat1[3][3], int mat2[3][3], const int row, const int col)
{
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cout<<mat1[i][j] + mat2[i][j]<<" ";
            
        }
        cout<<endl;
    }
    
}

int main()
{
    int const row = 3;
    int const col = 3;
    int mat1[row][col];
    int mat2[row][col];
    cout<<"Enter Data of Matrix One :";
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter Data of Matrix two :";
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cin>>mat2[i][j];
        }
    }
    summ(mat1,mat2, row, col);
    

    return 0;
}
