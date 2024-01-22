/*
Q.2 Write a program to find all possible subsets of a string.

Input  : "FUN"
Output :  F, FU, FUN, U, UN, N

Input  :"ABC"
Output : A, AB ,ABC, B, BC, C

Author: Suyash
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void print_subsets(string str)
{
    int i, j;

    for (i = 0; i < str.length(); i++)
    {
        j = i;
        while (j < str.length())
        {
            cout << str.substr(i, j - i + 1) << " ";
            j++;
        }
    }
    cout << endl;
}

int main(void)
{
    string str;

    cout << "\nEnter the string: ";
    getline(cin, str);

    print_subsets(str);

    return 0;
}
