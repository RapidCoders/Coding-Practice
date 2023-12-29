// Q.1 Write a program which accept number from user and display even sqaures 'n' times.
// Input: 3
// Output: 4 16 36
// Author: Vaibhav

#include<iostream>
using namespace std;

void even_sqr(int num)
{
    for(int i = 1;i<=num*2;i++)
    {
        if(i%2 == 0)
        {

            cout<<i*i<<" ";
            
        }
    }

}

int main()
{
    int num;
    cout<<"Enter Number :";
    cin>>num;
    even_sqr(num);
    return 0;

}
