/*
Q.1 Write a function that takes a sentence as input and returns the count of unique words in the sentence. Ignore case and punctuation when counting words.

Input: "The cat in the hat the hat on the mat."
Expected Output: 6

Input: "The quick brown Fox jumps over the Lazy Dog."
Expected Output: 8

Input: ""
Expected Output: 0

Input: "Coding is fun! Coding is creative, and coding is rewarding."
Expected Output: 6

Input: "The cat in the hat is the cat on the mat."
Expected Output: 7

Input: "There are 10 types of people in the world: those who understand binary and those who don't."
Expected Output: 15

Author: Vaibhav
*/

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_set>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

vector<string> split_str(const string &str)
{
    string word;
    vector<string> tokens;
    std::stringstream ss(str);

    while (getline(ss, word, ' '))
        tokens.push_back(word);
    return tokens;
}

string &to_lowercase(string &str)
{
    for (char &x : str)
    {
        if (x >= 'A' && x <= 'Z')
            x += 32;
    }
    return str;
}

bool check_unique(const vector<string> &tokens, const string &word)
{
    for (const string &s : tokens)
    {
        if (word == s)
            return true;
    }
    return false;
}

int count_unique(string str)
{
    to_lowercase(str);
    vector<string> uniques;
    vector<string> tokens = split_str(str);

    for (const string &s : tokens)
    {
        if (!check_unique(uniques, s))
            uniques.push_back(s);
    }
    return uniques.size();
}

// int count_unique(string str)
// {
//     to_lowercase(str);
//     vector<string> tokens = split_str(str);
//     std::unordered_set<string> myset(tokens.begin(), tokens.end());
//     return myset.size();
// }

int main(void)
{
    string str;

    cout << "\nEnter the string: ";
    getline(cin, str);

    cout << "\nCount of unique words from string is: " << count_unique(str) << endl;

    return 0;
}
