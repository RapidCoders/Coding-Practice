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
