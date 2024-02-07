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
