// Q.3 write a Program to get number is even or odd(Note You are not allowed to use directly % operator).
// There is an array of n elements, replace each element of the array by its corresponding rank. The minimum value element will have the highest rank..

// Input : num = 44
// Output : Even
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
    int num;
    cin >> num;
    string res = decimal_binary(num);
    if(res[res.length()-2] == '1')
    {
        cout << "Odd";
    }
    else
    {
        cout << "Even";
    }

    return 0;
}
