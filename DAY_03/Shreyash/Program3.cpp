// Q3. Write a program to find factorial of input number.
// Input: 5
// Output: 120

// Input: 4
// Output: 24
// Author: Shreyash
// Code

#include<iostream>
using namespace std;

int facto(int num)
{ 
  int fact = 1;
  for(int i = 1;i<=num;i++)
  {
    fact = fact*i;
  }

  return fact;

}

int main(){
  int num;
  cout<<"Enter num :";
  cin>>num;
  cout<<"factorial = ";
  cout<<facto(num);
  return 0;
}
