// Q1. Write a program which accept number from the user and check whether it is prime or not.
// Input: 31
// Output: Is is a prime number.

// Input: 20
// Output: It is not a prime number.
// Author: Vaibhav

#include<iostream>
using namespace std;

bool primeornot(int num)
{
  if(num == 0 || num == 1){
    return false;
  }else{
    for(int i = 2;i<num;i++){
      if(num%i == 0){
        return false;
      }
    }
  }

  return true;

}

int main()
{
  int num;
  cout<<"Enter Num :";
  cin>>num;
  if(primeornot(num)){
    cout<<"It is an Prime Number.";
  }else{
    cout<<"It is Not prime number.";
  }
  return 0;
}
