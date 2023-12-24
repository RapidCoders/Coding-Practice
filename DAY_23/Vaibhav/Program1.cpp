/*
Q.1 Write a program which accept a string from user and return the count of number of words in that string.

Input: Maze gaon kokan ahe. Mazya gavashejari samudra ahe.
Output: 8

Input:
Output: 0

Author: Vaibhav
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::unordered_map;
using std::vector;

string largest_common_prefix(vector<string> &strings)
{
    int i, j;
    unordered_map<char, int> map;

    for (i = 0; i < strings.size(); i++)
    {
        for (j = 0; j < strings[i].size(); j++)
        {
            map['A']++;
        }
    }
}

int main(void)
{
    int i, n;
    string str;
    vector<string> strings;

    cout << "Enter the number of strings: ";
    cin >> n;

    cout << "Enter the strings one by one: ";
    for (i = 0; i < n; i++)
    {
        cin >> str;
        strings.push_back(str);
    }

    str = largest_common_prefix(strings);

    if (!str.empty())
        cout << "Common largest prefix of strings is: " << str << endl;

    return 0;
}