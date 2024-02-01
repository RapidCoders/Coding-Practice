// Q.1 Write a function that takes two strings as input and returns the count of differing characters at each position.
// Input: "abcde", "abcde"
// Expected Output: 0

// Input: "hello", "hallo"
// Expected Output: 1

// Input: "abc", "def"
// Expected Output: 3

// Input: "", ""
// Expected Output: 0

// Input: "apple", "apricot"
// Expected Output: 2

// Input: "python", "java"
// Expected Output: 6
// Author: Vaibhav


#include<iostream>
#include<cmath>
using namespace std;

void difference(string str,string str1)
{
    int count = 0;
    for(int j = 0;j < str.length(); j++)
    {
        if(str[j] != str1[j])
        {
            count++;
        }
    }
    cout << count;
}

int main()
{
    string str;
    string str1;
    cout << "enter large string first ";
    cin >> str >> str1;
    difference(str,str1);
    
    return 0;
}
