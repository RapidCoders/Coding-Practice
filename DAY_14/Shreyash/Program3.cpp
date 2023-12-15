

// Q.3 Write a program to print given pattern.
// Input : row = 7 col = 7
// Output :

// *  *  *  *  *  *  *
// *  *           *  *
// *     *     *     *
// *        *        *
// *    *      *     *
// *  *           *  *
// *  *  *  *  *  *  *
// Author: Shreyash

#include <iostream>
using namespace std;
void patt(int row){
    // Write C++ code here
    for(int i = 1;i<=row;i++){
        for(int j = row;j>=1;j--){
            if(i == j||j == 1||i +j== row+1||i == 1||j ==row||i==row){
                cout<<"*  ";
                
            }else{
                cout<<"   ";
            }            
        }
        cout<<endl;
    }
}

int main() {
    int row;
    int col;
    cin>>row;
    cin>>col;
    if(row == col){
        patt(row);
    }
    
    return 0;
}
