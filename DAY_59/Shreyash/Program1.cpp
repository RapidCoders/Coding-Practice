// Q.1 Write a function that takes a string and two characters as input and swaps all occurrences of the first character with the second character and vice versa.
// Input: "hello world", 'l', 'o'
// Expected Output: "heool wlrod"

// Input: "python", 'a', 'b'
// Expected Output: "python"

// Input: "", 'a', 'b'
// Expected Output: ""

// Input: "banana", 'a', 'a'
// Expected Output: "banana"

// Input: "hello$world!", '$', '!'
// Expected Output: "hello!world$"
// Author: Vaibhav
#include<iostream>
using namespace std;

void changer(string *ptr , char first,char sec)
{
    for (int i = 0;i < ptr->length();i++)
    {
        if((*ptr)[i] == first)
         (*ptr)[i] = sec;   
        else if((*ptr)[i] == sec)
          (*ptr)[i] = first;

    }

}


int main()
{
    string str;
    string *ptr = &str;
    getline(cin,str);
    char first;
    char sec;
    cin >> first >> sec;
    changer(ptr , first ,sec);
    cout<<str;
    return 0;

}
