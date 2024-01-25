// Q.2 Program to determine whether a given number is a Deficient number
// Explanation :
// The deficient number can be defined as the number for which the sum of the proper divisors is lesser than the number itself.
// For example, the number 21 with its proper divisors (1, 3 and 7) has sum (11) lesser than itself.

// Input  : Enter the number : 21
// Output : The number is deficient.

// Input  : Enter the number : 22
// Output : The number is not deficient.

// Input  : Enter the number : 23
// Output :The number is deficient.

// Author: Suyash

#include<iostream>
using namespace std;

bool deficientornot(int num)
{
    int sum = 0;
    for(int i = 1;i<num;i++){
        if(num%i == 0){
            sum = sum + i;
        }
    }
    // cout<<sum;
    if(sum < num){
        return true;
    }
    return false;
}    
int main()
{
    int num;
    cout<<"Num :";
    cin>>num;
    if(deficientornot(num))
    {
        cout<<"Deficient";
    }
    else
    {
        cout<<"Not deficient";
    }
    return 0;
}
