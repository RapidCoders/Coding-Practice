/*
Q.1 Write a program that takes a string as input and reverses the order of words in the string.
the input and output of funtion should be string type

Input: "Hello World"
Output: "World Hello"

Input: "Programming is fun"
Output: "fun is Programming"

Author: Vaibhav
*/

#include <iostream>
#include <sstream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::stringstream;
using std::vector;

string &reverse_string_order(string &str)
{
    int i;
    string token;
    vector<string> tokens;
    stringstream input(str);

    while (input >> token)
        tokens.push_back(token);

    str.clear();

    for (i = tokens.size() - 1; i >= 0; i--)
        str.append(tokens[i] + " ");
    return str;
}

int main(void)
{
    string str;

    cout << "Enter the string: ";
    getline(cin, str);

    cout << "String after reversing the order is \"" << reverse_string_order(str) << "\"\n";

    return 0;
}