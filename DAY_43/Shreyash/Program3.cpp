
// Q.3 write Recursive program to Calculate Factorial of given number.
// Input: n = 5
// Output: 120

// Input: n = 7
// Output: 5040
// Author: Shreyash

#include<iostream>
using namespace std;

int factorial(int num)
{
    if(num >= 1){
        return num * factorial(num-1);
    }else{
        return 1;
    }
}    

int main()
{
    int num;
    cout<<"num :";
    cin>>num;
    int result = factorial(num);
    cout<<result;
    return 0;
}
