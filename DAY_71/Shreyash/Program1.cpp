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
