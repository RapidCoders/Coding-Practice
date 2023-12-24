// Q.1 Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string "".
// The function should return a string, the longest common prefix of all strings in the input list.

// Input: 4
// Input: ["apple", "apricot", "apology", "app"]
// Output: "ap"

// Input: 4
// Input: ["python", "java", "javascript", "c++"]
// Output: ""

// Input: 3
// Input: ["testing", "test", "tester"]
// Output: "test"
// Author: Vaibhav

#include <iostream>
#include <vector>
using namespace std;

string counter(vector<string>arr)
{          
    int i, j;
    string str;

    for (i = 0; i < arr[0].size(); i++)
    {
        for (j = 1; j < arr.size(); j++)
        {
            if (arr[0][i] != arr[j][i])
                return  str;
        }
        str.push_back(arr[0][i]);
    }
    return str;
}

int main() {
    vector<string>arr;
    int num;
    cout << "Number: ";
    cin >> num;
    string temp;
    for(int i = 1;i<=num;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    string str = counter(arr);
    cout<<str;
    return 0;
}
