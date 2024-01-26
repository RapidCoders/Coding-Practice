/*
Q.1 Write a program that takes two strings, s1 and s2, as input and returns True if s2 is a rotation of s1, and False otherwise. A rotation means shifting all characters of one string to the right by any number of positions.

Input: s1 = "hello", s2 = "ohell"
Expected Output: True

Input: s1 = "python", s2 = "onpyth"
Expected Output: True

Input: s1 = "apple", s2 = "apple"
Expected Output: True

Input: s1 = "cat", s2 = "tacocat"
Expected Output: False

Input: s1 = "", s2 = ""
Expected Output: True

Input: s1 = "abc", s2 = "bcd"
Expected Output: False

Input: s1 = "programming", s2 = "program"
Expected Output: False

Author: Vaibhav
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

bool check_rotation(string str1, string str2)
{
    int i, j;

    if (str1.length() != str2.length())
        return false;

    for (i = 0, j = str2.find(str1[0]); i < str1.length(); i++, j++)
    {
        if (j == str2.length())
            j = 0;

        if (str1[i] != str2[j])
            return false;
    }
    return true;
}

int main(void)
{
    string s1, s2;

    cout << "\nEnter the first string: ";
    getline(cin, s1);

    cout << "\nEnter the second string: ";
    getline(cin, s2);

    if (check_rotation(s1, s2))
        cout << "\nSecond string is rotation of first string.\n";
    else
        cout << "\nSecond string is not a rotation of first string.\n";

    return 0;
}
