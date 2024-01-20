
// Q.2 Write a program to count total number of characters in a string. Do not consider any sapces or punctuations.
// Input  : "The best of both worlds"  
// Output : Total number of characters in a string: 19

// Input  : "Twinkle twinkle little star, how I wonder what you are!"
// Output : Total number of characters in a string: 44
// Author: Suyash

#include<iostream>
using namespace std;

int counter(string str)
{
    int count = 0;
    for(int i = 0;i<str.length();i++)
    {
        if(str[i] != ' '&& str[i] != ','&& str[i] != '.'&& str[i] != '!'&& str[i] != '?')
        {
            count++;
        }
        
    }
    return count;
}    
int main()
{
    string str;
    getline(cin,str);
    cout<<"Total number of alphabets in a string: "<<counter(str);

    return 0;
}

