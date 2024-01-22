// Q3. Write a program which takes a year as input and check whether it is leap year or not.
// Input: 2000
// Output: True.

// Input: 2013
// Output: False.
// Author: Shreyash

#include<iostream>
using namespace std;

bool leapornot(int year)
{
  if(year%4 == 0){
    return true;
  }
  return false;
}

int main()
{
  int year;
  cout<<"Enter Num :";
  cin>>year;
  if(leapornot(year)){
    cout<<"True";
  }else{
    cout<<"False";
  }
  return 0;
}
