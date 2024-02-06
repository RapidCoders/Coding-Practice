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
