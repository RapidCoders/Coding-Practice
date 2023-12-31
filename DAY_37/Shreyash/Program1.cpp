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
using namespace std;

void setbits(int num)
{
    int mod = 0;
    int setbits = 0;
    if(num <= 0)
    {
        cout<<"Enter number greater than zero.";

    }
    else
    {
        while(num > 0)
        {
            mod = num%2;
            if(mod == 1)
            {
                setbits++;
            }
            num = num/2;
        }

    }
    cout<<setbits;
   
}





int main()
{
    int num;
    cin>>num;
    setbits(num);

    
    return 0;
}
