// Q.2 Write a program to print following pattern.
// Input : 5
// Output :
// 1 1 1 1 1
// 1       1
// 1       1
// 1       1
// 1 1 1 1 1
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


