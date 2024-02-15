// Q.1 Write a function that takes a string as input and returns the index of the character that, if removed, would make the string a palindrome. If the string is already a palindrome, return -1. If no such index exists, return -1.
// Input: "radar"
// Expected Output: -1

// Input: "a"
// Expected Output: -1

// Input: "abca"
// Expected Output: 2

// Input: "abbxa"
// Expected Output: 3

// Input: "racecar"
// Expected Output: -1

// Input: ""
// Expected Output: -1
// Author: Vaibhav

#include<iostream>
#include<vector>
using namespace std;

bool is_palindron(string str)
{
  string temp = "";
  for (int i = 0; i < str.length(); i++)
  {
    temp = str[i] + temp;
  }

  if(str == temp)
  {
    return true;
  }
  return false;
}

void spliter(string str)
{
  vector<string>subs;
  string temp = "";
  for(int j = 0;j < str.length();j++)
  {
    for(int i = 0; i < str.length();i++)
    {
      if(i != j)
      {
        temp = temp + str[i];
      }
    }
    subs.push_back(temp);
    temp = "";
  }
  for(int k = 0;k<subs.size();k++)
  {
    if(is_palindron(subs[k]))
    {
      cout << k << " ";
    }
  }

}

int main()
{
  string str;
  cin >> str;
  if(is_palindron(str))
  {
    cout << -1;
  }
  else
  {
    spliter(str);
  }

  return 0;
}
