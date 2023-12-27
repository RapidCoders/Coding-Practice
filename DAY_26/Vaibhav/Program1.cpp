/*
Q.1 Write a function that takes a string as input and returns the first non-repeated character in the string.

Input: "programming"
Output: 'p'

Input: "aabbcc"
Output: ''

Input: "hello"
Output: 'h'

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

char first_non_rep(string sentence)
{
    int count;

    for (char a : sentence)
    {
        count = 0;

        for (char b : sentence)
        {
            if (a == b)
                count++;
        }
        if (count == 1)
            return a;
    }
    return '\0';
}

int main(void)
{
    char c;
    string str;

    cout << "\nEnter the string: ";
    getline(cin, str);

    c = first_non_rep(str);

    if (c != '\0')
        cout << "\nFirst non-repeted character is: " << c << endl;
    else
        cout << "\nThere is no non-repeted character.\n";

    return 0;
}