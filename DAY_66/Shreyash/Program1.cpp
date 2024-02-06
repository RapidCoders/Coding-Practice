// Q.1 Write a function that takes a string as input and returns the middle character(s) of the string. If the length of the string is odd, return the middle character. If the length is even, return the middle two characters.
// Input: "abcde"
// Expected Output: "c"

// Input: "abcdef"
// Expected Output: "cd"

// Input: "x"
// Expected Output: "x"

// Input: ""
// Expected Output: ""

// Input: "hello world"
// Expected Output: " "
// Author: Vaibhav

#include<iostream>
using namespace std;

string middle_char_even(string str)
{
	string new_str = "";
	for(int i = str.length()/2;i >= str.length()/2-1;i--)
	{
		new_str = str[i]+new_str;
	} 
	return new_str;
}

char middle_char_odd(string str)
{
	if(str.length() == 1)
	{
		return str[0];
	}

	return str[str.length()/2];
	
}

int main()
{
	string str;
	getline(cin , str);
	if(str.length()%2 == 0)
	{
		cout << middle_char_even(str);
	}
	else
	{
		cout << middle_char_odd(str);
	}
	return 0;
}
