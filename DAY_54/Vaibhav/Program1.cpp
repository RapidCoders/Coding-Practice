/*
Q.1 Write a function that takes a string as input and returns a new string where each character is shifted by a fixed number of positions in the English alphabet. For example, if the shift is 3, 'A' becomes 'D', 'B' becomes 'E', and so on.

Input: "Hello", shift = 3
Expected Output: "Khoor"

Input: "World", shift = -2
Expected Output: "Umpjb"

Input: "Coding", shift = 0
Expected Output: "Coding"

Input: "Shift", shift = 26
Expected Output: "Shift"

Input: "AbCdEf", shift = 1
Expected Output: "BcDeFg"

Input: "", shift = 5
Expected Output: ""

Author: Vaibhav
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

bool check_alpha(const char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return true;
    return false;
}

bool is_lowercase(const char c)
{
    if (c >= 'a' && c <= 'z')
        return true;
    return false;
}

string &shift_characters(string &str, const int shift)
{
    int base;

    for (char &c : str)
    {
        if (check_alpha(c))
        {
            if (is_lowercase(c))
            {
                base = ((c - 'a' + shift) % 26);
                c = 'a';
                c += base;
            }
            else
            {
                base = ((c - 'A' + shift) % 26);
                c = 'A';
                c += base;
            }
        }
    }
    return str;
}

int main(void)
{
    string str;
    int shift;

    cout << "\nEnter the string: ";
    getline(cin, str);

    cout << "\nEnter the number: ";
    cin >> shift;

    cout << shift_characters(str, shift);

    return 0;
}
