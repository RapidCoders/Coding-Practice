// Q.1 Write a program to count the number of set bits (1s) in the binary representation of a given non-negative integer.
// Input:  0
// Output: 0

// Input:  7
// Output: 3

// Input:  123
// Output: 6

// Input:  1024
// Output: 1

// Input:  65535
// Output: 16
// Author: Vaibhav

#include<iostream>
#include<cmath>
using namespace std;

int lcm(int num1,int num2)
{
    int maxx = max(num1,num2);
    int lcm = 1;
    for(int i = maxx;i<num1*num2;i++){
        if(i%num1 == 0&&i%num2 == 0)
        {
            lcm = i;
            
        }

    }

    return lcm;
    
}

int main()
{
    int num1;
    cout<<"num1 :";
    cin>>num1;
    int num2;
    cout<<"num2 :";
    cin>>num2;
    int result = lcm(num1,num2);
    cout<<"HCF for given Inputs: "<<result; 
    return 0;
}
