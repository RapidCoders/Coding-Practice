// Q.1 Write a program that takes an integer n as input and prints a pattern based on the following rules:
// a) The pattern contains n rows.
// b) In each row, print the numbers from 1 to the row number.
// c) Repeat the numbers in reverse order after reaching the row number.

// Input: 4

// Output:
// 1
// 1 2 1
// 1 2 3 2 1
// 1 2 3 4 3 2 1
// Author: Vaibhav

#include<iostream>
using namespace std;

void patt(int num)
{
    for(int i = 1;i<=num;i++)
    {
        for(int j =1;j<=i;j++)
        {
            cout<<" "<<j;
        }
        for(int k = i-1;k>=1;k--)
        {
            cout<<" "<<k;
        }
        cout<<endl;
    }
}

int main()
{
    int num;
    cout<<"n :";
    cin>>num;
    patt(num);
    return 0;
}
