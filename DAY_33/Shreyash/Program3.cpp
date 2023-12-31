
// Q.3 Write a Program to find the frequency of odd & even numbers in the given matrixt.
// Input:  a[][] = {       
//                         {4, 1, 3},    
//                         {3, 5, 7},    
//                         {8, 2, 6}    
//                 };
// Output:
// Frequency of odd numbers: 5
// Frequency of even numbers: 4

// Author: Shreyash

#include<iostream>
#include<vector>
using namespace std;

void even_odd(int mat[3][3],int row)
{
    vector<int>even;
    vector<int>odd;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<row;j++){
            if(mat[i][j]%2 == 0){
                even.push_back(mat[i][j]);

            }
            else{
                odd.push_back(mat[i][j]);
            }
        }
    }
    cout<<"Even Numbers in matrix :";
    for(int k:even){
        cout<<k<<" ";
    }
    cout<<endl;
    cout<<"odd Numbers in matrix :";
    for(int l:odd){
        cout<<l<<" ";
    }
    
    
}

int main()
{
    int mat[3][3];
    int row;
    cout<<"Rows :";
    cin>>row;
    int col;
    cout<<"Column";
    cin>>col;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cin>>mat[i][j];
        }
    }

    even_odd(mat,row);
    return 0;
}
