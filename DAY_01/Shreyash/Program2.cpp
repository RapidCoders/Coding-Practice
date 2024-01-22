// Q2. Write a program to count number of digits in given number.
// Input: 4365
// Output: Number of digits are 4.

// Input: 125
// Output: Number of digits are 3.
// Author: Suyash


#include<iostream>
using namespace std;

int counter(int num)
{
  int counter = 0;
  while(num>0)
  {
    counter++;
    num /= 10;
  }
  
  return counter;
}

int main()
{
  int num;
  cout<<"Enter Num :";
  cin>>num;
  cout<<"Number of digits :"<<counter(num);
  return 0;
}
