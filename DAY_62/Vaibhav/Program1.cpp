/*
Q.1 Write a function that takes a string and a number as input and repeats each letter in the string by the specified number of times.

Input: "hello", 3
Expected Output: "hhheeellllllooo"

Input: "", 5
Expected Output: ""

Input: "a", 4
Expected Output: "aaaa"

Input: "abc", 10
Expected Output: "aaaaaaaaaabbbbbbbbbbcccccccccc"

Input: "!@#", 2
Expected Output: "!!@@##"

Author: Vaibhav
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

void print_characters_repeatedly(const string& str, int freq)
{
    int i;

    cout << '\n';
    for (char c : str)
    {
        for (i = 1; i <= freq; i++)
            cout << c;
    }
    cout << '\n';
}

int main(void)
{
    int freq;
    string str;

    cout << "\nEnter the string: ";
    getline(cin, str);

    cout << "\nEnter the number for repeating each character: ";
    cin >> freq;

    print_characters_repeatedly(str, freq);

    return 0;
}
