/*
Q.3 Write program program to remove brackets (),{},[] from an algebraic expression.

Input: a+b(/(c*c
Output:a+b/c*c

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

string remove_brackets(string str)
{
    string temp;

    for (char c : str)
    {
        if (c != '(' && c != ')' && c != '{' && c != '}' && c != '[' && c != ']')
            temp.push_back(c);
    }
    return temp;
}

int main(void)
{
    string str;

    cout << "\nEnter the arithmatic expression: ";
    getline(cin, str);

    cout << "\nArithmatic equation after removing brackets: " << remove_brackets(str) << endl;

    return 0;
}