// Q.2 Write a program to find all possible subsets of a string.
// Input  : "FUN"  
// Output :  F, U, N, FU, UN, FUN

// Input  :"ABC"
// Output : A, AB ,ABC, B, BC, C
// Author: Suyash

#include<iostream>
using namespace std;

void patt(char alpha,int num){
    for(int i = 1;i<=num;i++)
    {
        for(int k = 1;k<=num;k++)
        {
            if(i == 1||k == 1||i == num||k == num)
            {
                cout<<alpha<<" ";
            }else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
}    
int main(){
    int num;
    cout<<"NUm :";
    cin>>num;
    char alpha;
    cout<<"Alpha :";
    cin>>alpha;
    patt(alpha,num);
    return 0;
}


