// Q.1 Write a function that takes a string as input and returns the string with the first letter of each word capitalized.
// Input: "HELLO WORLD"
// Expected Output: "HELLO WORLD"

// Input: "hEllo WorlD"
// Expected Output: "HEllo WorlD"

// Input: "a b c"
// Expected Output: "A B C"

// Input: ""
// Expected Output: ""

// Input: "hello 123 world!"
// Expected Output: "Hello 123 World!"
	
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
