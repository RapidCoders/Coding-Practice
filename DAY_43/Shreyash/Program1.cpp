// Q.1 Write a program that prints the numbers from 1 to 100. But for multiples of three, print "Fizz" instead of the number, and for the multiples of five, print "Buzz." For numbers that are multiples of both three and five, print "FizzBuzz."
// Input: 3
// Output: Fizz

// Input: 5
// Output: Buzz

// Input: 15
// Output: FizzBuzz

// Input: 7
// Output: 7
// Author: Vaibhav


#include<iostream>
#include<vector>
using namespace std;

void fizzbuzz()
{
    for(int i = 1;i <= 100;i++){
        if(i%3 == 0){
            cout<<"Fizz";
        }else if(i%5 == 0){
            cout<<"Buzz";
        }else if(i%3 == 0 && i%5==0){
            cout<<"FizzBuzz";
        }else{
            cout<<i;
        }
        cout<<endl;
    }

}

int main(){
    fizzbuzz();
    return 0;
}
