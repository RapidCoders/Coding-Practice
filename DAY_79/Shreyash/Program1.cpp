
// Q.1 Write a function that takes a sentence as input and returns the count of words whose reversed form is also present in the sentence.
// Input: "wow! mom and dad are always the best"
// Output: 3  # Words "wow", "mom", and "dad" have their reversed forms present in the sentence

// Input: "hello world"
// Expected Output: 0

// Input: "racecar level kayak civic"
// Expected Output: 4

// Input: ""
// Expected Output: 0
// Author: Vaibhav


#include<iostream>
#include<vector>
using namespace std;

void palindrom(string str,int &c)
{
  string rstr;
  string ostr;
  string new_str;
  for (char i : str)
    {
        if (i == '!' || i == ',' ||i == '.' || i == '-' || i == '?'|| i == '\'' || i == ';' || i == '\"'||i == ' ')
        {
          rstr = ""+rstr;
          ostr = ostr + "";
          continue;
        }
        else
        {
          rstr =i+rstr;
          ostr = ostr + i;
        }
    }
  // cout<<rstr;
  if(ostr == rstr)
  {
    c++;
  }

}


void splite(string str)
{
    int count = 0;
    vector<string>arr;
    string substr = "";
    for(int i = 0;i <= str.length();i++)
    {
        if(str[i] != ' ')
        {
            substr += str[i];
        }
        else
        {
            arr.push_back(substr);
            substr = "";
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        palindrom(arr[i],count);
    }

    cout << count;
    
}

int main()
{
    string str;
    str = str + "#";
    getline(cin,str);
    splite(str);
    return 0;
}
