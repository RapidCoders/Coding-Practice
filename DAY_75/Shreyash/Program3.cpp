// Q.3 Given two numbers M and N. The task is to find the position of the rightmost different bit in the binary representation of numbers. If both M and N are the same then return -1 in this case.
// Input: 
// M = 11, N = 9
// Output: 
// 2
// Explanation: 
// Binary representation of the given numbers are: 1011 and 1001, 2nd bit from right is different.

// Input: 
// M = 52, N = 4
// Output: 
// 5
// Explanation: 
// Binary representation of the given numbers are: 110100 and 0100, 5th-bit from right is different.
// Author: Shreyash

#include<iostream>
using namespace std;

string decimal_binary(int num)
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
  return str;

}

int main()
{
  int n1;
  cin >> n1;
  string num1 = decimal_binary(n1);

  int n2;
  cin >> n2;
  string num2 = decimal_binary(n2);
  for(int i = num1.length();i >= 0;i--)
  {
    if(num1[i]==num2[i])
    {
      continue;
    }
    else
    {
      cout << i;
      break;
    }
  }
  return 0;
}
