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
