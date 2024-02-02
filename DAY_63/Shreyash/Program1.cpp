// Q.1 Write a function that takes a string as input and returns a list of all the words in the string, separated by spaces.
// Input: "Hello World"
// Expected Output: ['Hello', 'World']

// Input: ""
// Expected Output: []

// Input: "  This  is   a    test  "
// Expected Output: ['This', 'is', 'a', 'test']

// Input: "Hello, World!"
// Expected Output: ['Hello,', 'World!']

// Input: "123 456 789"
// Expected Output: ['123', '456', '789']
// Author: Vaibhav

#include<iostream>
#include<vector>
using namespace std;

void split(string str)
{
    vector<string>arr;
    string substr = "";
    for(char i:str)
    {
        if(i != ' ')
        {
            substr += i;
        }else{
            arr.push_back(substr);
            substr = "";
        }
    }cout<<"[";
    for(int j = 0;j < arr.size();j++)
    {
        if(j != arr.size()-1)
        {
            cout<< arr[j] << ",";
        }
        else{
            cout<< arr[j];
        }
    }
    cout<<"]";
}

int main()
{
    string str;
    cout << "Enter string to split";
    getline(cin , str);
    str = str + ' ';
    split(str);

    return 0;
}


