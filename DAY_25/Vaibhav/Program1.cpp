/*
Q.1 Write a function that takes a sentence as input and returns the longest word in the sentence. If there are multiple words with the same maximum length, return the first one.

Input: "The quick brown fox jumps over the lazy dog"
Output: "jumps"

Input: "Programming is fun"
Output: "Programming"

Input: "Artificial Intelligence is changing the world"
Output: Intelligence

Author: Vaibhav
*/

#include <iostream>
#include <vector>
#include <sstream>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::stringstream;
using std::vector;

string find_longest(string sentence)
{
    vector<string> tokens;
    string token, longest_str;
    stringstream input(sentence);

    while (getline(input, token, ' '))
        tokens.push_back(token);

    for (string s : tokens)
    {
        if (longest_str.size() <= s.size())
            longest_str = s;
    }
    return longest_str;
}

int main(void)
{
    string str;

    cout << "\nEnter the string: ";
    getline(cin, str);

    cout << "\nLongest word from above sentence is \"" << find_longest(str) << "\"\n";

    return 0;
}
