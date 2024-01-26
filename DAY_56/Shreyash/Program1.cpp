// Q.1 Write a program that takes two strings, s1 and s2, as input and returns True if s2 is a rotation of s1, and False otherwise. A rotation means shifting all characters of one string to the right by any number of positions.
// Input: s1 = "hello", s2 = "ohell"
// Expected Output: True

// Input: s1 = "python", s2 = "onpyth"
// Expected Output: True

// Input: s1 = "apple", s2 = "apple"
// Expected Output: True

// Input: s1 = "cat", s2 = "tacocat"
// Expected Output: False

// Input: s1 = "", s2 = ""
// Expected Output: True

// Input: s1 = "abc", s2 = "bcd"
// Expected Output: False

// Input: s1 = "programming", s2 = "program"
// Expected Output: False
// Author: Vaibhav


#include<iostream>
using namespace std;

string removeduplistr(string str)
{
  int c = 0;
  for(int i = 0;i<str.length();i++)
  {
    for(int j = 0;j<str.length();j++)
    {
      if(str[i] == str[j]){
        c++;
      }
    }
    if(c%2 != 1)
    {
      str[i] = 'z';
    }
    c = 0;
  }
  return str;
}

bool equalornnot(string str,string str1)
{  
    string str01 = removeduplistr(str);
    string str02 = removeduplistr(str1);

    if(str01.length() == str02.length())
    {
        int count = 0; 
        for(int i = 0;i<str01.length();i++)
        {
            for(int j = 0;j<str02.length();j++)
            {
                if(str01[i] == str02[j])
                {
                    count++;
                }
            }
        }
        // cout<<count<<" "<<str01.length();
       
        if(count == str01.length())
        {
            return true;
        }
    }
    
    return false;
}    
int main(){
    string str;
    cout<<"Enter The String 1:";
    cin>>str;
    string str1;
    cout<<"Enter The String 2:";
    cin>>str1;
    if(equalornnot(str,str1))
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}

