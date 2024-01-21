/*
Q.1 Write a function that takes three strings as input and checks whether the third string is formed by interleaving the characters of the first two strings while maintaining the order of characters.

Input: str1 = "abc", str2 = "def", interleaved = "adbcef"
Expected Output: True

Input: str1 = "abc", str2 = "def", interleaved = "abcde"
Expected Output: False

Input: str1 = "abc", str2 = "def", interleaved = "adbecf"
Expected Output: True

Input: str1 = "abc", str2 = "def", interleaved = "acdbef"
Expected Output: False

Input: str1 = "", str2 = "", interleaved = ""
Expected Output: True

Author: Vaibhav
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

bool check_interleaving(string str1, string str2, string interleaved)
{
    int i, j, k;

    if ((str1.length() + str2.length()) != interleaved.length())
        return false;

    for (i = 0, j = 0, k = 0; k < interleaved.length(); k++)
    {
        if (str1[i] == interleaved[k])
            i++;
        else if (str2[j] == interleaved[k])
            j++;
        else
            return false;
    }
    return true;
}

int main(void)
{
    string str1, str2, interleaved;

    cout << "\nEnter first string: ";
    getline(cin, str1);

    cout << "\nEnter second string: ";
    getline(cin, str2);

    cout << "\nEnter interleaved string: ";
    getline(cin, interleaved);

    if (check_interleaving(str1, str2, interleaved))
        cout << "\nTrue\n";
    else
        cout << "\nFalse\n";

    return 0;
}
