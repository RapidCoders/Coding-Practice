// Q.1 Write a program to accepts the number as input from the user and check whether the number is positive or not.
// Input: 10
// Output: Positive

// Input: -15
// Output: Negative

// Input: 0
// Output: Neutral
// Author: Vaibhav


#include<iostream>
using namespace std;

void natureNum(int num)
{
    if(num == 0)
    {
        cout<<"Neutral";
    }
    else if(num > 0)
    {
        cout<<"Positive";
    }
    else
    {
        cout<<"Negative";
    }

}

int main(){
    int num;
    cout<<"Num :";
    cin>>num;
    natureNum(num);
    return 0;
}
