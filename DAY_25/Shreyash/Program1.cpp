// Q.1 Write a function that takes a sentence as input and returns the longest word in the sentence. If there are multiple words with the same maximum length, return the first one.
// Input: "The quick brown fox jumps over the lazy dog"
// Output: "quick"

// Input: "Programming is fun"
// Output: "Programming"

// Input: "Artificial Intelligence is changing the world"
// Output: Intelligence
// Author: Vaibhav



#include<iostream>
#include<vector>
using namespace std;

void longest_substr(vector<string>str)
{
    string substr;

    for (string i : str)
    {
        if (i.length() >= substr.length())
            substr = i;
    }
    cout<<substr;
}

int main()
{
    int num;
    cin>>num;
    vector<string>str;
    string temp;
    for(int i = 1;i<=num;i++){
        cin>>temp;
        str.push_back(temp);
    }

    longest_substr(str);
    return 0;
}
