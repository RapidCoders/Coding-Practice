// Q.1 Write a function that takes a string and a number as input and repeats each letter in the string by the specified number of times.
// Input: "hello", 3
// Expected Output: "hhheeellllllooo"

// Input: "", 5
// Expected Output: ""

// Input: "a", 4
// Expected Output: "aaaa"

// Input: "abc", 10
// Expected Output: "aaaaaaaaaabbbbbbbbbbcccccccccc"

// Input: "!@#", 2
// Expected Output: "!!@@##"
// Author: Vaibhav

#include<iostream>
#include<cmath>
using namespace std;

void multichar(char i,int num)
{
    for(int j = 0;j < num; j++)
    {
        cout<<(char)i;
    }

}

int main()
{
    string str;
    int num ;
    cin >> str >> num;
    for(int i = 0;i<str.length();i++)
    {
        multichar(str[i],num);
    }
    return 0;
}
