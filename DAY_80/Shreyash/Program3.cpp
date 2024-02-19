// Q.3 Given an array of strings arr[] of length n representing non-negative integers, arrange them in a manner, such that, after concatanating them in order, it results in the largest possible number. Since the result may be very large, return it as a string.
// Input: 
// n = 5
// arr[] =  {"3", "30", "34", "5", "9"}
// Output: "9534330"
// Explanation: 
// Given numbers are  {"3", "30", "34", "5", "9"}, the arrangement "9534330" gives the largest value.

// Input: 
// n = 4
// arr[] =  {"54", "546", "548", "60"}
// Output: "6054854654"
// Explanation: 
// Given numbers are {"54", "546", "548", "60"}, the arrangement "6054854654" gives the largest value.
// Author: Shreyash


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(string a,string b)
{
    return (a+b)>(b+a);
}

string concatnator(vector<string>arr)
{
    string sum = "";
    sort(arr.begin(),arr.end(),compare);
    for(string s:arr)
    {
        cout << s << " ";
        sum += s;
    }
    return sum;
}

int main()
{
    vector<string>arr;
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        string temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cout << concatnator(arr);
    return 0;
}
