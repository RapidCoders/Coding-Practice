/*
Q.1 Given a string, find the first non-repeating character and return its index. If it doesn't exist, return -1.

Input: "leetcode"
Output: 0

Input: "loveleetcode"
Output: 2

Author: Vaibhav
*/
#include <iostream>
#include <unordered_map>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int first_non_rep_char(string str)
{
    int i;
    std::unordered_map<int, int> frequency;

    for (char c : str)
        frequency[c]++;

    for (i = 0; i < str.length(); i++)
    {
        if (frequency[str[i]] == 1)
            return i;
    }
    return -1;
}

int main(void)
{
    string s;

    cout << "\nEnter the string: ";
    getline(cin, s);

    cout << "\nFirst non-repeating character is at index: " << first_non_rep_char(s) << endl;

    return 0;
}
