// Q.1 Write a function that takes a lowercase letter (a-z) as input and returns its position in the alphabet. Assume that the input will always be a lowercase letter.
// Input: 'c'
// Expected Output: 3

// Input: 'a'
// Expected Output: 1

// Input: 'z'
// Expected Output: 26

// Input: 'm'
// Expected Output: 13

// Input: '1' (not a lowercase letter)
// Expected Output: None (or any indication of invalid input handling)
// Author: Vaibhav
    
#include<iostream>

int position(char c)
{
    int pos = 1;
    for(int i = 97; i < c;i++)
    {
        pos++;
    }
    return pos;
}

int main()
{
    char c;
    std :: cin >> c;
    if(c >= 97 && c <= 122)
    {
        unsigned int res = position(c);
        std :: cout << res;
    }
    else
    {
        std :: cout << "None";
    } 
    return 0;
}
