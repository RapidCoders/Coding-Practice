// Q.1 Write a program to find the largest prime palindrome less than or equal to a given number n. The program should take the input n and output the largest prime palindrome found.
// Input: 50
// Output: 11

// Input: 500
// Output: 383

// Input: 1000
// Output: 929
// Author: Vaibhav

#include<iostream>
using namespace std;

bool primeornot(int temp){
    for(int i = 2;i<=temp/2;i++){
        if(temp%i == 0){
            return false;
        }
    }
    return true;
}

int palindromNum(int num)
{
    int largest_pal_num = 0;
    if(num < 10)
    {
        cout<<"Invalid Input";
    }
    else
    {
        for(int i = 10;i<=num;i++){
            int temp = i;
            int rev_num = 0;
            if(primeornot(temp))
            {
                
                while(temp > 0){
                rev_num = (rev_num * 10) + (temp % 10);
                temp = temp/10;
              }
              if(rev_num == i){
                largest_pal_num = i;
              }
            }
        }

    }
    return largest_pal_num;
}

int main(){
    int num;
    cout<<"Num :";
    cin>>num;
    cout<<palindromNum(num);
    return 0;
}
