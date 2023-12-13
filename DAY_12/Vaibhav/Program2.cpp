/*
Q.2 Program to replace lower-case characters with upper-case and vice versa.

Input: str1 = "Great Power"  
Output: String after case conversion : gREAT pOWER

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

string case_conversion(string str)
{
    for (char &c : str)
    {
        if (c >= 'A' && c <= 'Z')
            c += 32;
        else if (c >= 'a' && c <= 'z')
            c -= 32;
    }
    return str;
}

int main()
{
    string str;

    cout << "Enter the string: ";
    getline(cin, str);

    cout << "\nString after converting case is "
         << "\"" << case_conversion(str) << "\"\n";

    return 0;
}
