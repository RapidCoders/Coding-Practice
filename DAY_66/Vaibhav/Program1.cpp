/*
Q.1 Write a function that takes a string as input and returns the middle character(s) of the string. If the length of the string is odd, return the middle character. If the length is even, return the middle two characters.

Input: "abcde"
Expected Output: "c"

Input: "abcdef"
Expected Output: "cd"

Input: "x"
Expected Output: "x"

Input: ""
Expected Output: ""

Input: "hello world"
Expected Output: " "

Author: Vaibhav
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

string middle_char(const string &str)
{
    string middle_str;
    int length = str.length();

    if (length == 1)
        return str;

    if (str.length() % 2 != 0)
        middle_str = str[(length / 2)];
    else
    {
        middle_str.push_back(str[(length / 2) - 1]);
        middle_str.push_back(str[(length / 2)]);
    }
    return middle_str;
}

int main(void)
{
    string str, result;

    cout << "\nEnter the string: ";
    getline(cin, str);

    result = middle_char(str);

    if (result.length() == 1)
        cout << "\nMiddle character of string is: "
             << "\'" << result << "\'\n";
    else
        cout << "\nMiddle characters of string are: "
             << "\'" << result << "\'\n";

    return 0;
}
