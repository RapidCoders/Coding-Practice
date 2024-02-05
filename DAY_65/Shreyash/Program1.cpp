// Q.1 Write a function that takes two strings as input and concatenates them together, separating them by a space.
// Input: "", ""
// Expected Output: ""

// Input: "Hello!", "World?"
// Expected Output: "Hello! World?"

// Input: "   Hello", "World   "
// Expected Output: "   Hello World   "

// Input: "This is a", "test"
// Expected Output: "This is a test"

// Input: "123", "456"
// Expected Output: "123 456"
// Author: Vaibhav
	
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string concater(string str,string str1)
{
    if(str[str.length()-1] != ' ')
	{
		return str+" "+str1;
	}
	else
	{
		return str+str1;
	}
}

int main()
{
    string str;
    cout << "Enter string :";
    getline(cin , str);
	string str1;
    cout << "Enter string :";
    getline(cin , str1);
    cout<<concater(str,str1);

    return 0;
}
