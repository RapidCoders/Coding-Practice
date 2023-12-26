/*
Q.3 Write a Program to find Length of Last Word of user defind string.

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.

Author: Shreyash
*/

#include <iostream>
#include <sstream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using std::vector;

vector<string> tokenize(string str)
{
    string token;
    vector<string> tokens;
    stringstream input(str);

    while (input >> token)
        tokens.push_back(token);
    return tokens;
}

int last_word_length(string str)
{
    vector<string> strings = tokenize(str);
    return strings[strings.size() - 1].size();
}

int main(void)
{
    string str;

    cout << "\nEnter the string: ";
    getline(cin, str);

    cout << "\nThe length of last word is : " << last_word_length(str) << endl;

    return 0;
}
