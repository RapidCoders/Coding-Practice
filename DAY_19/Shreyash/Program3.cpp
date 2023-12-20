// Q.3 Write a Program to check if number is Harshad number or not.
// Input : num = 21
// Output : True

// it is divisible by its own sum (1+2) of its digit(2,1)
// So it is Harshad's Number

// Input : num = 31
// Output : False

// it is not divisible by its own sum (3+1) of its digit(3,1)
// So it is not Harshad's Number
// Author: Shreyash

#include<iostream>
using namespace std;

int har_checker(int num){
    int sum = 0;
    int mod;
    while(num > 0){
        mod = num % 10;
        sum = sum + mod;
        num = num / 10;
    }
    return sum;
}

int main(){
    int num;
    cout<<"num :";
    cin>>num;
    int sum1 = har_checker(num);
    if(num%sum1 == 0){
        cout<<"Harshad Number.";
    }else{
        cout<<"Not Harshad Number.";
    }
}
