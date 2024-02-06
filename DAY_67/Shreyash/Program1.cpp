// Q.1 Write a function that takes two strings as input and alternates their characters to form a new string.
// Input: "abcd", "123"
// Expected Output: "a1b2c3d"

// Input: "", "123"
// Expected Output: "123"

// Input: "abc", "!@#"
// Expected Output: "a!b@c#"

// Input: "hello", "world"
// Expected Output: "hweolrllod"

// Input: "aa", "bb"
// Expected Output: "abab"
// Author: Vaibhav
	
#include<iostream>
using namespace std;

string mixer(string str0,string str1)
{
	string str = "";

	for(int i = 0;i<str0.length();i++)
	{
			str = str+str0[i];
			str = str+' ';

	}
	cout<<str;
	int i  = 0;
	for(int j = 0;j < str0.length()*2;j++)
	{
		if(str[j] == ' ')
		{
			str[j] = str1[i];
			i++;
		}
	}
	return str;
}

int main()
{
	string str0;
	string str1;
	cin >> str0 >> str1;
	cout << mixer(str0,str1);
	return 0;
}
