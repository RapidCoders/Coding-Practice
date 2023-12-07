/*
Q.2 Program to count the total number of punctuation characters exists in a string

Input: char str [] = "Good Morning! Mr. James Potter. Had your breakfast?"  
(If any character in the string is matched with ('!', "," ,"\'" ,";" ,"\"", ".", "-" ,"?"), increment the count by 1.)

Output: Total number of punctuation characters exists in string: 4

Author: Suyash A
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int count_punct(string str)
{
    int count = 0;

    for (char c : str)
    {
        if (c == '!' || c == ',' || c == '\'' || c == ';' || c == '\"' || c == '.' || c == '-' || c == '?')
            count++;
    }
    return count;
}

int main(void)
{
    string str;

    cout << "\nEnter the string: ";
    getline(cin, str);

    cout << "\nCount of punctuations in above string is: " << count_punct(str) << endl;

    return 0;
}
