#include<iostream>
#include<map>
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
