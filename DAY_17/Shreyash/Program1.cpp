// Q.1 Write a program to which accept number from the user and print fibonacci series up to that number.
// Input : 7
// Output : 0 1 1 2 3 5 8

// Input: -3
// Output: 
// Author: Vaibhav

#include <iostream>
using namespace std;
void fibonacci(int num){
    int num1 = 0, num2 = 1, nextnum = 0;
    for(int i = 1;i<=num;i++){
        if(i == 1) {
            cout << num1 << " ";
            continue;
        }
        if(i == 2) {
            cout << num2 << " ";
            continue;
        }
        nextnum = num1 + num2;
        num1 = num2;
        num2 = nextnum;
        
        cout << nextnum << " ";
    }
}

int main() {
    int num;
    cout<<"Enter Number :";
    cin>>num;
    fibonacci(num);
    return 0;
}
