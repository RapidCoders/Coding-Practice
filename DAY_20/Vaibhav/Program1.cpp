/*
Q.1 Write a program to ckeck if a string is an anagram of another string.
An anagram is a word or phrase formed by rearranging the letters of another.

Input 1: "listen"
Input 2: "silent"
Output: True

Input 1: "debit card"
Input 2: "bad credit"
Output: True

Input 1: "Race"
Input 2: "care"
Output: True

Input 1: " listen"
Input 2: "silent "
Output: True

Input 1: "hello"
Input 2: "world"
Output: False

Input 1: "12345"
Input 2: "21453"
Output: True

Input 1: "Marvel12345"
Input 2: "Rav15m2e34l"
Output: True

Author: Vaibhav
*/

#include <iostream>
#include <unordered_map>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::unordered_map;

string &to_lower(string &str)
{
    for (char &c : str)
    {
        if (c >= 'A' && c <= 'Z')
            c += 32;
    }
    return str;
}

string remove_special_chars(string str)
{
    string new_str;

    for (char &c : str)
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
            new_str.push_back(c);
    }
    return new_str;
}

bool check_anagram(string str1, string str2)
{
    unordered_map<char, int> ump;

    str1 = remove_special_chars(str1);
    str2 = remove_special_chars(str2);

    if (str1.length() != str2.length())
        return false;

    to_lower(str1);
    to_lower(str2);

    for (char &c : str1)
    {
        if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
            ump[c]++;
    }

    for (char &c : str2)
    {
        if (((ump[c] == 0) && (c >= 'a' && c <= 'z')) || ((ump[c] == 0) && (c >= '0' && c <= '9')))
            return false;
    }
    return true;
}

int main(void)
{
    string str1, str2;

    cout << "\nEnter the first string: ";
    getline(cin, str1);

    cout << "\nEnter the second string: ";
    getline(cin, str2);

    if (check_anagram(str1, str2))
        cout << "\nString is Anagram.\n";
    else
        cout << "\nString is not Anagram.\n";

    return 0;
}
