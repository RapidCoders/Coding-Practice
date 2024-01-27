/*
Q.1 Write a program that takes a string as input and replaces all consonants with a specified character, while keeping vowels unchanged.

Input: "Hello, World!", replacement = '@'
Expected Output: "@e@@o, @o@@@!"

Input: "BCDFGHJKLMNPQRSTVWXYZ", replacement = '-'
Expected Output: "---------------------"

Input: "aeiou", replacement = '*'
Expected Output: "aeiou"

Input: "", replacement = '*'
Expected Output: ""

Author: Vaibhav
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

string &replace_consonents(string &str, char replacement)
{
    for (char &c : str)
    {
        if (((c >= 'A' && c <= 'Z') && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') || ((c >= 'a' && c <= 'z') && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'))
            c = replacement;
    }
    return str;
}

int main(void)
{
    char c;
    string s;

    cout << "\nEnter the string: ";
    getline(cin, s);

    cout << "\nEnter the character to replace with consonent: ";
    cin >> c;

    cout << "\nString after replacing consonents: " << replace_consonents(s, c) << '\n';

    return 0;
}
