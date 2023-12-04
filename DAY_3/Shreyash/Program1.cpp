
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
