// Q1. Write a program which accept number from the user and return the addition digits.
// Input: 3458
// Output: 20

// Input: 52
// Output: 7

// Code

#include <iostream>  
using namespace std;  

int sum(int num)
{
    int sum=0,m;
    while(num>0)    
    {    
    m=num%10;    
    sum=sum+m;    
    num=num/10;    
    }    
    cout<<"Sum is = "<<sum<<endl;
    return 0;
}
int main()  
{  
    int num;    
    cout<<"Enter a number: ";    
    cin>>num; 
    cout<<sum(n);
    return 0;  
}  
