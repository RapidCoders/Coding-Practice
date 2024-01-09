// Q.2 Write a method to check and return whether given number is Spy Number or not.
// Explanation:
// A positive integer is called a spy number if the sum and product of its digits are equal.
// In other words, a number whose sum and product of all digits are equal is called a spy number.

// Example:
// Let's take the number 1124 and check whether the number is a spy or not.
// First, we will split it into digits (1, 1, 2, 4). After that find the sum and product of all the digits.
//   Sum = 1 + 1 + 2 + 4 = 8
//   Product = 1 * 1 * 2 * 4 = 8
// We observe that the sum and product of the digits both are equal. Hence, 1124 is a spy number.

// Input  : 132
// Output : Spy number.

// Input  : 217
// Output : Not a Spy Number.
// Author: Suyash

#include<iostream>
using namespace std;

bool spynumornot(int num)
{
    int mod;
    int sum = 0;
    int prod = 1;
    while (num > 0)
    {
        mod = num % 10;
        sum = sum + mod;
        prod = prod*mod;
        num = num/10;
        
    }
    if(sum == prod){
        return true;
    }

    return false;
}
    


int main()
{
    int num;
    cout<<"num :";
    cin>>num;
    if(spynumornot(num))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}
