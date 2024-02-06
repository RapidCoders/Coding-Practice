/*
Q.1 Write a function that takes two strings as input and alternates their characters to form a new string.

Input: "abcd", "123"
Expected Output: "a1b2c3d"

Input: "", "123"
Expected Output: "123"

Input: "abc", "!@#"
Expected Output: "a!b@c#"

Input: "hello", "world"
Expected Output: "hweolrllod"

Input: "aa", "bb"
Expected Output: "abab"

Author: Vaibhav
*/

// Solution 1

/*
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

string alternate(const string &str1, const string &str2)
{
    string altered;
    int i, length1 = str1.length(), length2 = str2.length();

    for (i = 0; i < length1; i++)
    {
        altered.push_back(str1[i]);
        if (i < length2)
            altered.push_back(str2[i]);
    }

    for (; i < length2; i++)
        altered.push_back(str2[i]);

    return altered;
}

int main(void)
{
    string str1, str2;

    cout << "\nEnter the first string: ";
    getline(cin, str1);

    cout << "\nEnter the second string: ";
    getline(cin, str2);

    cout << "\nString after altering: "
         << "\'" << alternate(str1, str2) << "\'\n";

    return 0;
}
*/

// Solution 2

#include <iostream>
#include <cstring>
using std::cin;
using std::cout;

char *alternate(char *str1, char *str2)
{
    int i = 0, j = 0;
    int length1 = strlen(str1), length2 = strlen(str2);
    char *altered = new char[length1 + length2 + 1];

    if (altered == nullptr)
        return nullptr;

    while (i < length1)
    {
        altered[j++] = str1[i];
        if (i < length2)
            altered[j++] = str2[i];
        i++;
    }
    while (i < length2)
        altered[j++] = str2[i++];
    altered[j] = '\0';

    return altered;
}

int main(void)
{
    char str1[30];
    char str2[30];

    cout << "\nEnter the first string: ";
    cin.getline(str1, 30);

    cout << "\nEnter the second string: ";
    cin.getline(str2, 30);

    cout << "\nString after altering: "
         << "\'" << alternate(str1, str2) << "\'\n";

    return 0;
}
