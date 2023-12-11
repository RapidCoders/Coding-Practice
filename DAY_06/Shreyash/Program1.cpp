// Q.1 Write a program which accept rows and numbers of column from user and display below pattern.
// Input : row = 6, col = 6
// Output :
// *   *   *   *   *   *   
// *   *               *
// *       *           *
// *           *       *
// *               *   *
// *   *   *   *   *   *
// Author: Vaibhav
#include<iostream>
using namespace std;
void patt(int rows,int column)
{
    for(int i = 1;i<=rows;i++){
        for(int j=1;j<=column;j++){
            if(i==1||j==1||j==column||i==rows||i==j){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

}

int main()
{
    int rows;
    int columns;
    cin>>rows;
    cin>>columns;
    patt(rows,columns);

}
