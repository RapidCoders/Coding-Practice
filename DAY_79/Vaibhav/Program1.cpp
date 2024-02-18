/*
Q.1 Write a function that takes a sentence as input and returns the count of words whose reversed form is also present in the sentence.

Input: "wow! mom and dad are always the best"
Output: 3  # Words "wow", "mom", and "dad" have their reversed forms present in the sentence

Input: "hello world"
Expected Output: 0

Input: "racecar level kayak civic"
Expected Output: 4

Input: ""
Expected Output: 0

Author: Vaibhav
*/

#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

void swap(char &a, char &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

string reverse(string str)
{
    int i = 0, j = str.length() - 1;

    while (i < j)
    {
        swap(str[i], str[j]);
        i++;
        j--;
    }
    return str;
}

vector<string> tokenize(string str)
{
    string s;
    vector<string> tokens;
    int i, length = str.size();

    for (i = 0; i < length; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            s.push_back(str[i]);
        else
        {
            if (!s.empty())
                tokens.push_back(s);
            s.clear();
        }
    }
    if (i == length)
        tokens.push_back(s);
    return tokens;
}

int count_palindromes(string str)
{
    vector<string> tokens = tokenize(str);
    int i, count = 0, size = tokens.size();

    for (i = 0; i < size; i++)
    {
        if (!tokens[i].compare(reverse(tokens[i])))
            count++;
    }
    return count;
}

int main(void)
{
    string str;

    cout << "\nEnter the string: ";
    getline(cin, str);

    cout << "\nCount of palindromes in a string is: " << count_palindromes(str) << '\n';

    return 0;
}
