// Q.3 Write a Program to find Length of Last Word of user defind string.
// Input: s = "Hello World"
// Output: 5
// Explanation: The last word is "World" with length 5.

// Input: s = "luffy is still joyboy"
// Output: 6
// Explanation: The last word is "joyboy" with length 6.
// Author: Shreyash

#include<iostream>
#include<vector>
using namespace std;

void length_last(string str)
{
        int i = str.size() - 1;
        while (i >= 0 && str[i] == ' ') {
            --i;
        }
        int j = i;
        while (i >= 0 && str[j] != ' ') {
            --j;
        }
        cout<< i - j;

}

int main()
{
    string str;
    getline(cin,str);
    length_last(str);
    return 0;
}
