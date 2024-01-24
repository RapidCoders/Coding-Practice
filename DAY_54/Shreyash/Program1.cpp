// Q.1 Write a function that takes a string as input and returns a new string where each character is shifted by a fixed number of positions in the English alphabet. For example, if the shift is 3, 'A' becomes 'D', 'B' becomes 'E', and so on.
// Input: "Hello", shift = 3
// Expected Output: "Khoor"

// Input: "World", shift = -2
// Expected Output: "Umpjb"

// Input: "Coding", shift = 0
// Expected Output: "Coding"

// Input: "Shift", shift = 26
// Expected Output: "Shift"

// Input: "AbCdEf", shift = 1
// Expected Output: "BcDeFg"

// Input: "", shift = 5
// Expected Output: ""
// Author: Vaibhav
    
#include<iostream>
using namespace std;

string alphashifter(string str,int shift)
{
    if(shift > 0)
    {
        for(int i = 0;i<str.length();i++){
        str[i] = str[i] + shift; 
        }
    }
    else if(shift < 0)
    {
        for(int i = 0;i<str.length();i++)
        {
        str[i] = str[i] + shift; 
        }
    }
    else
    {
        return str;
    }
    
    
    return str;
}    
int main(){
    string str;
    cout<<"Enter The String :";
    int shift;
    cin>>str;
    cout<<"Shift of :";
    cin>>shift;
    cout<<"Shifted string : "<<alphashifter(str,shift);

    return 0;
}

