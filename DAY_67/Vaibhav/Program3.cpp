/*
Q.3 write a program Remove all Adjacent Duplicate Characters.

Input : str = "aacbbcaaded"
Output : ded

Input : str = “aabaabccded”
Output : ded

Author: Shreyash
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

string &remove_adjacent_pairs(string &str)
{
    int i;
    string adjacent_removed_str;

    for (i = 1; i < str.length(); i++)
    {
        if (str[i - 1] == str[i])
        {
            str.erase(i - 1, 2);
            i = 0;
        }
    }
    return str;
}

int main(void)
{
    string str;

    cout << "\nEnter the string: ";
    getline(cin, str);

    cout << "\nString after removing adjacent duplicate pairs: " << remove_adjacent_pairs(str) << '\n';

    return 0;
}
