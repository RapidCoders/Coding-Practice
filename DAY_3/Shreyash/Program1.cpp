Q1. Write a program which accept N number from the user and return the average.
Input: 5
Input: 10 20 30 40 50
Output: 30

// Code

#include<iostream>
using namespace std;

int avgg(int num)
{
  int a = 0;
  int sum = 0;
  for(int i = 1;i<=num;i++)
  {
    cin>>a;
    sum = sum + a;

  }
  int avg = sum/2;
  cout<<"average for your numbers :";
  cout<<avg;

  return 0;

}

int main(){
  int num;
  cout<<"Enter num :";
  cin>>num;
  cout<<avgg(num);
  return 0;
}
