/*
Q3. Write a function that reverses a string..
Input: SHREYASH
Output: HSAYERHS

Input: COOL
Output: LOOC.

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

void swap(char *c1, char *c2)
{
    *c1 = *c1 + *c2;
    *c2 = *c1 - *c2;
    *c1 = *c1 - *c2;
}

string strrev(string &str)
{
    int i = 0, j = str.length() - 1;

    while (i < j)
        swap(&str[i++], &str[j--]);

    return str;
}

int main(void)
{
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    cout << "Reversed string is: " <<strrev(str) << endl;

    return 0;
}
