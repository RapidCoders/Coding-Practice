/*
Q.1 Write a function that takes a string as input and returns the string with the first letter of each word capitalized.

Input: "HELLO WORLD"
Expected Output: "HELLO WORLD"

Input: "hEllo WorlD"
Expected Output: "HEllo WorlD"

Input: "a b c"
Expected Output: "A B C"

Input: ""
Expected Output: ""

Input: "hello 123 world!"
Expected Output: "Hello 123 World!"

Author: Vaibhav
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

string &each_word_first_letter_capitalized(string &str)
{
    int i;

    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;

    for (i = 1; i < str.length(); i++)
    {
        if ((str[i-1] == ' ') && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] -= 32;
    }
    return str;
}

int main(void)
{
    int i;
    string str;

    cout << "\nEnter the string: ";
    getline(cin, str);

    cout << "\nString after capitalizing each letter of word is: "
         << "\"" << each_word_first_letter_capitalized(str) << "\"\n";

    return 0;
}
