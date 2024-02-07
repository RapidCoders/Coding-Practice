// Q.1 Write a function that takes a string as input and returns a compressed version of the string where consecutive repeated characters are replaced by the character followed by the count of repetitions.
// Input: "aaabbc"
// Expected Output: "a3b2c1"

// Input: ""
// Expected Output: ""

// Input: "x"
// Expected Output: "x1"

// Input: "!@##$$"
// Expected Output: "!1@1#2$2"

// Input: "abcdefg"
// Expected Output: "a1b1c1d1e1f1g1"
// Author: Vaibhav

#include<iostream>
#include<set>
using namespace std;

int char_counter(char i,string str)
{
	int count = 0;
	for(char j :str)
	{
		if(i == j)
		{
			count++;
		}
	}
	
	return count;
}

int main()
{
	set<char>arr;
	string str;
	cin >> str;
	string new_str = "";
	for(char i :str)
	{
		arr.insert(i);
	}
	for(char i :arr)
	{
		new_str += i;
	}
	for(char i :new_str)
	{
		cout << i << char_counter(i,str);
	}
	return 0;
}
