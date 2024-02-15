#include<iostream>
#include<vector>
using namespace std;

int spliter(string str,string x,int n)
{
  vector<string>arr;
  string temp = "";
  for (int i = 0; i < str.length(); i++)
  {
    for(int j = i;j < i + n;j++)
    {
      temp = temp + str[j];
    }
    arr.push_back(temp);
    temp = "";
  }
  for(int k = 0;k < arr.size();k++)
  {
    if(arr[k] == x)
    {
      return k;
    }
  }
  return -1;
}

int main()
{
  string str;
  cin >> str;
  string x;
  cin >> x;
  int n = x.length();
  int res = spliter(str,x,n);
  if(res >= 0)
  {
    cout << res;
  }
  else
  {
    cout << -1;
  }
  return 0;
}
