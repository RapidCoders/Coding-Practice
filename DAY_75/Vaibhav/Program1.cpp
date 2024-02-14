/*
Q.1 Write a function that takes a string as input and returns the index of the character that, if removed, would make the string a palindrome. If the string is already a palindrome, return -1. If no such index exists, return -1.

Input: "radar"
Expected Output: -1

Input: "a"
Expected Output: -1

Input: "abca"
Expected Output: 2

Input: "abbxa"
Expected Output: 3

Input: "racecar"
Expected Output: -1

Input: ""
Expected Output: -1

Author: Vaibhav
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

int rm_for_palindrome(string str)
{
    int length = str.length();
    int i = 0, j = length - 1;

    if (str.empty() || length == 1)
        return -1;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            if (str[i] == str[j - 1])
                return j;
            if (str[i + 1] == str[j])
                return i;
        }
        i++;
        j--;
    }
    return -1;
}

int main(void)
{
    int result;
    string str;

    cout << "\nEnter the string: ";
    getline(cin, str);

    result = rm_for_palindrome(str);

    if (result != -1)
        cout << "\nRemove the character from index: " << result << '\n';
    else
        cout << "\nIt is palidrome string.\n";

    return 0;
}
