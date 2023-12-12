/*
Q.1 Write a program which accepts one string from user and checks the string is palindrome or not.

Input: "level"
Output: True

Input: "A man, a plan, a canal, Panama!"
Output: True

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

string &make_small(string &str)
{
    for (char &c : str)
    {
        if (c >= 'A' && c <= 'Z')
            c += 32;
    }
    return str;
}

bool check_palindrome(string str)
{
    int i = 0, j = str.length() - 1;

    str = make_small(str);

    while (i < j)
    {
        if (str[i] == ' ' || str[i] == '.' || str[i] == ',' || str[i] == '!' || str[i] == '\'' || str[i] == '\"')
        {
            i++;
            continue;
        }

        if (str[j] == ' ' || str[j] == '.' || str[j] == ',' || str[j] == '!' || str[j] == '\'' || str[j] == '\"')
        {
            j--;
            continue;
        }

        if (str[i] != str[j])
            return false;
        i++;
        j--;
    }
    return true;
}

// a man a plan a canal panama

int main()
{
    string s;

    cout << "\nEnter the string: ";
    getline(cin, s);

    if (check_palindrome(s))
        cout << "\nString is palindrome.\n";
    else
        cout << "\nString is not palindrome.\n";

    return 0;
}
