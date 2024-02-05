#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void split(string str)
{
    string substr = "";
    for(char i:str)
    {
        if(i != ' ')
        {
            substr += i;
        }
		else
		{
			substr[0] = ::toupper(substr[0]);
			cout<<substr<<" ";
            substr = "";
        }
    }
	
}

int main()
{
    string str;
    cout << "Enter string to split :";
    getline(cin , str);
    str = str + ' ';
    split(str);

    return 0;
}
