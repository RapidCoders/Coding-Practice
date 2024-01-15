
// Q.3 Write a program to count the digits of a given number using recursion.
// Input: n = 15
// Output: 2

// Input: n = 3773
// Output: 4
// Author: Shreyash

#include<iostream>
using namespace std;

int countdigits(int num)
{
    if(num%10 == 0){
        return 0;
    }
    return 1 + countdigits(num/10);
}   

int main()
{
    int num;
    cout<<"num :";
    cin>>num;
    int result = countdigits(num);
    cout<<result;
    return 0;
}
