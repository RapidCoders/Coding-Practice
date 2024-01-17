// Q.1 Write a function that determines if a given positive integer is a power of four.
// Input: 16
// Output: true
// Explanation: 16 is 4^2.

// Input: 64
// Output: true
// Explanation: 64 is 4^3.

// Input: 5
// Output: false
// Explanation: 5 is not a power of four.

// Input: 1
// Output: true
// Explanation: 1 is 4^0.
// Author: Vaibhav


#include<iostream>
using namespace std;
#include<cmath>

bool powoffour(int num)
{
    for(int i =1;i<=num/2;i++){
        int result = pow(4,i);
        if(result == num){
            return true;
        }
    }

    return false;
}
int main(){
    int num;
    cout<<"Num :";
    cin>>num;
    bool result = powoffour(num);
    if(result){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}
