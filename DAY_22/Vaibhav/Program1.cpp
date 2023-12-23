/*
Q.1 Write a program which accept a string from user and return the count of number of words in that string.

Input: Maze gaon kokan ahe. Mazya gavashejari samudra ahe.
Output: 8

Input:
Output: 0

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int count_words(const string &str)
{
    int i, count = 1;

    if (str.empty())
        return 0;

    for (i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
            count++;
    }

    return count;
}

int main(void)
{
    string str;

    cout << "\nEnter the string: ";
    getline(cin, str);

    cout << "\nThe number of words in the string are: " << count_words(str) << endl;

    return 0;
}