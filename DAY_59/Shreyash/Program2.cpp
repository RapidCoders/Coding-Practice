// Q.2 Program to print all Disarium numbers between 1 and 100
// Explanation: A number is said to be the Disarium number when the sum of its digit raised to the power of their respective positions is equal to the number itself.

// For example, 175 is a Disarium number as follows
// 1^1 + 7^2 + 5^3 = 1 + 49 + 125 = 175

// Output :
// Disarium numbers between 1 and 100 are
// 1 2 3 4 5 6 7 8 9 89 
// Author: Suyash

#include<iostream>
#include<cmath>
using namespace std;

void Disarium_or_not(int num)
{
    int n = num;
    int sum = 0;
    if(num < 10){
        cout<<num<<" ";
    }else{
        int power = 2;
        while(num > 0){
            int mod = num%10;
            sum = sum + pow(mod,power);
            power--;
            num = num /10;
        }
        if(sum == n)
        {
        cout<<n;
        }
    }
    
}

int main()
{
    for(int i = 1;i<=100;i++)
    {
        Disarium_or_not(i);
    }
    return 0;
}
