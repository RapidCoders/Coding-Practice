Q.2 Program to determine whether a given matrix is an identity matrix.
Explanation : A matrix is said to be the identity matrix if it is the square matrix in which elements of principle diagonal are ones,
              and the rest of the elements are zeroes.
Input:
Matrix a =[1, 0, 0]  
          [0, 1, 0]  
          [0, 0, 1]  

Output: Given matrix is an identity matrix
Author: Suyash

#include<iostream>
using namespace std;

void summ(int mat1[3][3], const int row, const int col)
{
    int counter = 0;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            if( i == j){
                if(mat1[i][j] == 1){
                    counter++;
                }
            }
            
        }
        
    }
    if(counter >= 3)
    {
            cout<<"Given matrix is an identity matrix";
    }
    else
    {
            cout<<"Given matrix is an not identity matrix";
    }
    
}

int main()
{
    int const row = 3;
    int const col = 3;
    int mat1[row][col];
    cout<<"Enter Data of Matrix One :";
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cin>>mat1[i][j];
        }
    }
    summ(mat1, row, col);
    

    return 0;
}
