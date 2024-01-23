// Q.1 Write a function that takes a character as input and prints a below pattern.
// Input: 4
// Output:
//       4
//     4 3
//   4 3 2
// 4 3 2 1
// Author: Vaibhav


#include<iostream>
using namespace std;

void patt(int num){
    for(int i = 1;i<=num;i++)
    {
        for(int j = 1;j<=num;j++)
        {
            if(i+j == num+1){
                cout<<num;
            }
            else if(i+j == num+2){
                cout<<num-1;
            }
            else if(i+j == num+3){
                cout<<num-2;
            }
            else if(i+j == num+4){
                cout<<num-3;
            }
            else if(i+j == num*2){
                cout<<num-(num-1);
            }
            else{
                cout<<" ";
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
