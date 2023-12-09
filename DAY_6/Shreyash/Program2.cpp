// Q.2 Program to count the total number of punctuation characters exists in a string
// Input: char str [] = "Good Morning! Mr. James Potter. Had your breakfast?"  
// (If any character in the string is matched with ('!', "," ,"\'" ,";" ,"\"", ".", "-" ,"?"), increment the count by 1.)

// Output: Total number of punctuation characters exists in string: 4
// Author: Suyash

#include<iostream>
using namespace std;

int count_symbols(string text)
{
    int counter = 0;

    for (char i : text)
    {
        if (i == '!' || i == ',' ||i == '.' || i == '-' || i == '?'|| i == '\'' || i == ';' || i == '\"'){
            counter = counter + 1;
        }
    }
    return counter;
}

int main(void)
{
    string text;
    cout << "Enter the text: ";
    getline(cin,text);
    cout << "Total number of punctuation characters exists in string: " << count_symbols(text);
    return 0;
}
