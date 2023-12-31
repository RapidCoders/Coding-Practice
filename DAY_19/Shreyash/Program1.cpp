// Q.1 Write a program to check if a given number is a perfect square.
// A perfect square is a non-negative integer that can be expressed as the product of an integer multiplied by itself. In other words, a positive integer (n) is a perfect square if there exists an integer (m) such that (n = m \times m).

// For example:

// 1 is a perfect square because (1 = 1 times 1).
// 4 is a perfect square because (4 = 2 times 2).
// 9 is a perfect square because (9 = 3 times 3).
// 16 is a perfect square because (16 = 4 times 4).
// Input: 9
// Output: True

// Input: 25
// Output: True

// Input: 7 
// Output: False

// Input: 18
// Output: False
// Author: Vaibhav

#include<iostream>
using namespace std;

int perfectt(int num){
    int flag = 0;
    for(int i = 1;i<num;i++)
    {
        if(num%i==0){
            if(i*i == num)
            {
                 flag++;
            }
        }
    }
    return flag;
    
}

int main(){
    int num;
    cout<<"num :";
    cin>>num;
    int ot =  perfectt(num);
    if(ot == 0)
    {
        cout<<"False";
    }else
    {
        cout<<"True";
    }
}
