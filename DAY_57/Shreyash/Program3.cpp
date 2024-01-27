// Q.3 Write a program to check the number is spy number or not.
// Input: num = 1124
// Output:True

// Explanation :
// A positive integer is called a spy number if the sum and product of its digits are equal. In other words, a number whose sum and product of all digits are equal is called a spy number.
// 1+1+2+4 = 8
// 1*1*2*4 = 8
// Author: Shreyash

#include<iostream>
#include<algorithm>
using namespace std;

bool spyornot(int num)
{
    int sum = 0;
    int mul = 1;
    while(num > 0)
    {
        int mod = num % 10;
        sum = sum + mod;
        mul = mul * mod;
        num = num/10;
    }
    if(sum == mul)
    {
        return true;
    }
    else{
        return false;
    }

    
}

int main()
{
    int num;
    cin>>num;
    if(spyornot(num))
        cout<<"True";
    else
        cout<<"False";
    return 0;
}
