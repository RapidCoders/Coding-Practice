
// Q.2 Program to chech whether Matrix is Trace Matrix.
// Explanation: The normal of a matrix is the square root of the sum of squares of all the elements of a matrix. For example, consider the following matrix. {9 8 2} {1 4 7} {3 5 6} Normal and Trace of a Matrix in Java First, we will calculate the sum of the square of each element. 92 + 82 + 22 + 12 + 42 + 72 + 32 + 52 + 62 81 + 64 + 4 + 1 + 16 + 49 + 9 + 25 + 36 = 285 Now, calculate the square root of the sum of squares. √285 = 16.8819430161

// The trace of a matrix is the sum of all the elements present in the principal diagonal (upper left to lower right). Note that the matrix must be a square matrix (the number of rows and columns must be the same). It is useful to prove results in linear algebra. For example, consider the following matrix. {(9) 8 2} {1 (4) 7} {3 5 (6)} Normal and Trace of a Matrix in Java Trace for the above matrix is 5 + 4 + 7 = 16.

// Author: Suyash


#include<iostream>
#include<cmath>
using namespace std;

void normalandtrace(int matrix[3][3],int row,int col)
{
    int normal = 0;
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            normal = normal + (matrix[i][j]*matrix[i][j]);
        
        }

    }
    float sqr = sqrt(normal);
    cout<<"The normal of the given matrix is: "<<sqr<<endl;
    float sum = 0;
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            if(i == j)
            {
                sum = sum + matrix[i][j];
            }
        
        }

    }
    cout<<"The trace of the given matrix is : "<<sum;


}

int main()
{
    int matrix[3][3];
    int row,col;
    row = col = 3;
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            cin>>matrix[i][j];
        
        }

    }
    normalandtrace(matrix,row,col);
    return 0;
}
