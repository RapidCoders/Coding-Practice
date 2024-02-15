
// Q.3 Your task is to implement the function strstr. The function takes two strings as arguments (s,x) and locates the occurrence of the string x in the string s. The function returns an integer denoting the first occurrence of the string x in s (0 based indexing).
// Input:
// s = GeeksForGeeks, x = Fr
// Output: -1
// Explanation: Fr is not present in the string GeeksForGeeks as substring.

// Input:
// s = GeeksForGeeks, x = For
// Output: 5
// Explanation: For is present as substring in GeeksForGeeks from index 5 (0 based indexing).
// Author: Shreyash

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
