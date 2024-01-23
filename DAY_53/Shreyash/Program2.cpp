
// Q.2 Write a program to print following pattern.
// Input : 5
// Output :
// 1 1 1 1 1
// 1       1
// 1   1   1
// 1       1
// 1 1 1 1 1
// Author: Suyash

#include<iostream>
using namespace std;

void patt(int num){
    for(int i = 1;i<=num;i++)
    {
        for(int j = 1;j<=num;j++)
        {
            if(i == 1||j == 1||i == num||j == num){
                cout<<" 1";
            }
            else if(i == 2||j==2||i ==num-1||j==num-1 )
            {
                cout<<"  ";
            }
            else if(i == num/2||j == num/2)
            {
                cout<<"  ";

            }
            else if(i == num/2 + 2||j == num/2 + 2)
            {
                cout<<"  ";

            }
            else if(i == num/2 + 1||j == num/2 + 1){
                cout<<" 1";
                
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
    int num;
    cout<<"Num :";
    cin>>num;
    patt(num);
    return 0;
}
