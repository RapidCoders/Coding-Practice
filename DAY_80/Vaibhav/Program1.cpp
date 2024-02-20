/*
Q.1 Write a function that takes a lowercase letter (a-z) as input and returns its position in the alphabet. Assume that the input will always be a lowercase letter.

Input: 'c'
Expected Output: 3

Input: 'a'
Expected Output: 1

Input: 'z'
Expected Output: 26

Input: 'm'
Expected Output: 13

Input: '1' (not a lowercase letter)
Expected Output: None (or any indication of invalid input handling)

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;

int position(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 1;
    return -1;
}

int main(void)
{
    char c;
    int result;

    cout << "\nEnter the character: ";
    cin >> c;

    result = position(c);

    if (result == -1)
        cout << "\nInvalid input.\n";
    else
        cout << "\n\'"
             << c << "\' is at position \'" << result << "\'\n";

    return 0;
}
