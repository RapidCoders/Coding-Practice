// Q.3 write a program Remove all Adjacent Duplicate Characters.
// Input : str = "aacbbcaaded"
// Output : ded

// Input : str = “aabaabccded”
// Output : ded

// Author: Shreyash

#include<iostream>
using namespace std;

string adj_charremover(string str)
{
	string new_str = "";
	for(int i = 0;i<str.length();i++)
	{
		if(str[i+1] == str[i] || str[i] == str[i -1])
		{
			continue;
		}
		else
		{
			new_str = new_str + str[i];
		}
	}
	return new_str;
}

int main()
{
	string str;
	cin >> str;
	cout << adj_charremover(adj_charremover(str));
	return 0;
}
