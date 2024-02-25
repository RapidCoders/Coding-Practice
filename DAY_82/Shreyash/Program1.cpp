// Q.1 Given a string s, your task is to reverse only the vowels in the string.
// Input: "hello"
// Expected Output: "holle"

// Input: "xyz"
// Expected Output: "xyz"

// Input: "a"
// Expected Output: "a"

// Input: "aeiou"
// Expected Output: "uoiea"

// Input: "leetcode"
// Expected Output: "leotcede"
// Author: Vaibhav

#include<iostream>
#include<vector>
using namespace std;

void re_vowels(string &str)
{
    vector<int>arr;
    vector<int>narr;

    for (int i = 0; i <= str.length()/2; i++)
    {
        if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u')
        {
            arr.push_back(i);
        }
    }
    for (int i = str.length()-1; i >= str.length()/2 ; i--)
    {
        if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u')
        {
            narr.push_back(i);
        }
    }
    for(int i = 0;i < arr.size();i++)
    {
            swap(str[arr[i]], str[narr[i]]);
    }
    cout << str;
    
}

int main()
{
    string str;
    cin >> str;
    re_vowels(str);
    return 0;
}
