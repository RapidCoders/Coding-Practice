/*
Q.1 Write a program to implement a function that checks if a given string is a pangram. A pangram is a sentence or expression that uses every letter of the alphabet at least once.

Input: "The quick brown fox jumps over the lazy dog."
Output: True

Input:  "Pack my box with five 7623 dozen liquor jugs."
Output: True

Input:  "The lazy dog slept."
Output: False

Input:  "Cwm fjord bank glyphs vext quiz."
Output: True

Author: Vaibhav
*/

#include <iostream>
#include <unordered_map>
#include <unordered_set>
#define FIRST 1
#define SECOND 2
using std::cin;
using std::cout;
using std::endl;
using std::string;

char to_lower(char c)
{
    return (c >= 'A' && c <= 'Z') ? c += 32 : c;
}

bool check_pangram(const string &str, int solution)
{
    if (solution == FIRST)
    {
        char alphabet = 'a';
        std::unordered_map<char, int> freq;

        for (char c : str)
        {
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
                freq[to_lower(c)]++;
        }

        while (alphabet != 'z')
        {
            if (freq[alphabet++] == 0)
                return false;
        }
        return true;
    }

    if (solution == SECOND)
    {
        std::unordered_set<int> unique;

        for (char c : str)
        {
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
                unique.insert(to_lower(c));
        }
        if (unique.size() == 26)
            return true;
        return false;
    }

    return false;
}

int main(void)
{
    string str;

    cout << "\nEnter the string: ";
    getline(cin, str);

    if (check_pangram(str, FIRST))
        cout << "\nThe string is Pangram.\n";
    else
        cout << "\nThe string is not a Pangram.\n";

    return 0;
}
