/*
Q.1 Write a function that takes a string and two characters as input and swaps all occurrences of the first character with the second character and vice versa.

Input: "hello world", 'l', 'o'
Expected Output: "heool wlrod"

Input: "python", 'a', 'b'
Expected Output: "python"

Input: "", 'a', 'b'
Expected Output: ""

Input: "banana", 'a', 'a'
Expected Output: "banana"

Input: "hello$world!", '$', '!'
Expected Output: "hello!world$"

Author: Vaibhav
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

string &swap_characters(string &str, char c1, char c2)
{
    for (char &c : str)
    {
        if (c == c1)
            c = c2;
        else if (c == c2)
            c = c1;
    }
    return str;
}

int main(void)
{
    string str;
    char c1, c2;

    cout << "\nEnter the string: ";
    getline(cin, str);

    cout << "\nEnter the first string: ";
    cin >> c1;

    cout << "\nEnter the second string: ";
    cin >> c2;

    cout << "\nString after swapping characters is: " << swap_characters(str, c1, c2) << '\n';

    return 0;
}
