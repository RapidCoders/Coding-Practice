/*
Q.1 Write a function that takes two strings as input and returns the count of differing characters at each position.

Input: "abcde", "abcde"
Expected Output: 0

Input: "hello", "hallo"
Expected Output: 1

Input: "abc", "def"
Expected Output: 3

Input: "", ""
Expected Output: 0

Input: "apple", "apricot"
Expected Output: 2

Input: "python", "java"
Expected Output: 6

Author: Vaibhav
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

int count_differing_chars(const string& str1, const string& str2)
{
    int i, j, count = 0;

    for (i = 0 ; i < str1.length(); i++)
    {
        for (j = 0; j < str2.length(); j++)
        {
            if (str1[i] == str2[j])
                break;
        }
        if (j == str2.length())
            count++;
    }
    return count;
}

int main(void)
{
    string s1, s2;

    cout << "\nEnter first string: ";
    getline(cin, s1);

    cout << "\nEnter second string: ";
    getline(cin, s2);

    cout << "\nCount of differing characters is: " << count_differing_chars(s1, s2) << '\n';

    return 0;
}
