/*
Q.3 write a program to capitalize the first and last letter of each word of a string.

Input : str = "Prep insta"
Output : PreP InstA

Input : str = "my name is shreyash gaikwad."
Output : MY NamE IS ShreyasH GaikwaD.

Author: Shreyash
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

bool is_lowercase(char c)
{
    if (c >= 'a' && c <= 'z')
        return true;
    return false;
}

bool is_char(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    return false;
}

string &capit_first_last_char(string &str)
{
    int i = 0, length = str.length();

    while (!is_char(str[i]))
        i++;
    if (is_lowercase(str[i]))
        str[i] -= 32;

    i = length - 1;
    while (!is_char(str[i]))
        i--;
    if (is_lowercase(str[i]))
        str[i] -= 32;

    for (i = 1; i < length - 1; i++)
    {
        if ((is_lowercase(str[i]) && str[i + 1] == ' ') || (is_lowercase(str[i]) && str[i - 1] == ' '))
            str[i] -= 32;
    }
    return str;
}

int main(void)
{
    string str;

    cout << "\nEnter the string: ";
    getline(cin, str);

    cout << "\nString after capitalization of first and last character is: " << '\"' << capit_first_last_char(str) << '\"';

    return 0;
}
