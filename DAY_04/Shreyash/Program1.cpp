// Q1. Write a program which accept rows and numbers of column from user and display below pattern.
// Input : row = 3, col = 5
// Output :
// 5   4   3   2   1
// 5   4   3   2   1
// 5   4   3   2   1
// Author: Vaibhav



#include<iostream>
using namespace std;


int patt(int row,int col)
{
    for(int i= 1;i<=row;i++)
    {
        for(int j=col;j!=0;j--)
        {
        cout<<j<<" ";
    }
    cout<<endl;
    }

    return 0;
}

int main()
{

    int row;
    int col;
    cout<<"number of row :";
    cin>>row;
    cout<<"number of Column :";
    cin>>col;
    cout<<patt(row,col);
    
    return 0;
}
