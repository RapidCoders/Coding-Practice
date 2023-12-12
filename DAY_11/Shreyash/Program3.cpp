#include<iostream>
using namespace std;

void decimal_binary(int num)
{
  int mod;
  int reminder;
  string str = " ";
  while(num>0)
  {
    mod = num%2;
    string character = to_string(mod);
    num = num/2;
    // cout<<mod;
    str =character+str;
  }
  // cout<<str;
  int binary = stoi(str);
  cout<<binary;

}


int main() 
{
  int num;
  cin>>num;
  decimal_binary(num);
  return 0;
}
