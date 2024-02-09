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
