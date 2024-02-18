
// Q.3 Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
// Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2 
// Since 2 has only one digit, return it.

// Input: num = 0
// Output: 0
// Author: Shreyash

#include<iostream>
using namespace std;

void one_digit(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int mod = num%10;
        sum = sum + mod;
        num /= 10;
    }
    if(sum >= 10)
    {
        one_digit(sum);
    }
    else
    {
        cout << sum;
    }
}

int main()
{
    int num;
    cin >> num;
    one_digit(num);
    return 0;
}
