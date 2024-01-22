// Q.1 Write a function that takes a character as input and prints a below pattern.
// Input: A, 5
// Output:
//     A
//    A A
//   A A A
//  A A A A
// A A A A A
// Author: Vaibhav

#include<iostream>
using namespace std;

void patt(char alpha,int num){
    for(int i = 1;i<=num;i++)
    {
        for(int j = num-i;j>=1;j--)
        {
            cout<<" ";
        }
        for(int k = 1;k<=i;k++)
        {
            cout<<" "<<alpha;
        }
        
        cout<<endl;
    }
}    
int main()
{
    int num;
    cout<<"Num :";
    cin>>num;
    char alpha;
    cout<<"Alpha :";
    cin>>alpha;
    patt(alpha,num);
    return 0;
}

