
// Q.3 write a Program to find the sum of each row and each column of a matrix.
// Input :
//      int a[][] = {       
//                         {1, 2, 3},    
//                         {4, 5, 6},    
//                         {7, 8, 9}    
//                     };   
// Output :

// Sum of 1 row: 6
// Sum of 2 row: 15
// Sum of 3 row: 24
// Sum of 1 column: 12
// Sum of 2 column: 15
// Sum of 3 column: 18
// Author: Shreyash


#include<iostream>
using namespace std;

void sum(int mat[3][3],const int row,const int col)
{
  for ( int i = 0; i < row; i++)
  {
    int sum = 0;
    for (int j = 0; j < col; j++)
    {
      sum += mat[i][j];
    }
    cout <<"Sum of "<<i<<" Row :"<< sum << endl;
    
  }
  for ( int i = 0; i < row; i++)
  {
    int sum = 0;
    for (int j = 0; j < col; j++)
    {
      sum += mat[j][i];
    }
    cout <<"Sum of "<<i<<" Column :"<< sum << endl;
    
  }
  


}

int main()
{
  const int row = 3;
  const int col = 3;
  int mat[row][col];
  for ( int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> mat[i][j];
    }
    
  }
  sum(mat,row,col);
  return 0;
}

