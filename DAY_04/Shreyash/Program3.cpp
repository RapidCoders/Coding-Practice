
// # Q3. Write a program which accept N number from the user and return smallest number from it.
// # Input: 5
// # Input: 10 20 30 40 50
// # Output: 10

// # Input: 6
// # Input: 85 69 21 45 73 25
// # Output: 21
// # Author: Shreyash

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int smallestinarr(vector<int>arr)
{
    sort(arr.begin(),arr.end());

    return arr[0];
}

int main()
{
    vector<int>arr;
    int num;
    cout<<"Enter Number of Elements you want to put in array :";
    cin>>num;
    int temp;
    for(int i = 0;i<num;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"Smallest Element in array :"<<smallestinarr(arr);
    return 0;
}


