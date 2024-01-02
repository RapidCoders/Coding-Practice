/*
Q.3 Write a program to count the sum of numbers in a string.

Input: string = "Pr22e44pinsta"
Output: 12

Input: string = "4PREP2INSTA8"
Output: 14

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int sum(const string &str)
{
    int addition = 0;

    for (char c : str)
    {
        if (c >= '1' && c <= '9')
            addition += atoi(&c);
    }
    return addition;
}

int main(void)
{
    string s;

    cout << "\nEnter the string: ";
    getline(cin, s);

    cout << "\nSum of digits from string is: " << sum(s) << endl;

    return 0;
}