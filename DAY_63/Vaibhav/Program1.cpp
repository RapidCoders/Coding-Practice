/*
Q.1 Write a function that takes a string as input and returns a list of all the words in the string, separated by spaces.

Input: "Hello World"
Expected Output: ['Hello', 'World']

Input: ""
Expected Output: []

Input: "  This  is   a    test  "
Expected Output: ['This', 'is', 'a', 'test']

Input: "Hello, World!"
Expected Output: ['Hello,', 'World!']

Input: "123 456 789"
Expected Output: ['123', '456', '789']

Author: Vaibhav
*/

#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

int count_delimeters(const string &str, const char delimeter)
{
    int count = 0;

    for (char c : str)
    {
        if (c == delimeter)
            count++;
    }
    return count;
}

vector<string> tokenize(const string &str, const char delimeter = ' ')
{
    string token;
    vector<string> tokens;
    int i, j = -1, count_of_delimeters = count_delimeters(str, delimeter);

    for (i = 0; i <= count_of_delimeters; i++)
    {
        while ((str[++j] != delimeter) && (j < str.length()))
            token.push_back(str[j]);

        if (!token.empty())
            tokens.push_back(token);
        token.clear();
    }
    return tokens;
}

int main(void)
{
    int i;
    string str;
    vector<string> tokens;

    cout << "\nEnter the string: ";
    getline(cin, str);

    tokens = tokenize(str);

    cout << "\nString after tokenizing:\n";
    for (i = 0; i < tokens.size(); i++)
        cout << tokens[i] << '\n';

    return 0;
}
