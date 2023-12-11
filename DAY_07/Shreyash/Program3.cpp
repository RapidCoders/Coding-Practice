
// Q3. Write a Program for Printing Incrementing Number Square Pattern.
// Input : row = 4, col = 6
// Output:

// 1 1 1 1 1 1 
// 2 2 2 2 2 2
// 3 3 3 3 3 3
// 4 4 4 4 4 4

// Author: Shreyash

#include <iostream>
using namespace std;
void patt(int row,int col){
    if(row <= 0||col <=0){
        cout<<"You have to enter Number greater than 0";
    }
    else{
        for(int i =1;i<=row;i++){
        for(int j = 1;j<=col;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    }

    

}
 
int main(){
    int row ;
    int col ;
    cout<<"Rows :";
    cin>>row;
    cout<<"Columns :";
    cin>>col;
    patt(row,col);

}
