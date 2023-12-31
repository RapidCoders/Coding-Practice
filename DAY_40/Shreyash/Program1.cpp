// Q.1 Write a program to implement a function that checks if a given string is a pangram. A pangram is a sentence or expression that uses every letter of the alphabet at least once.
// Input: "The quick brown fox jumps over the lazy dog."
// Output: True

// Input:  "Pack my box with five 7623 dozen liquor jugs."
// Output: True

// Input:  "The lazy dog slept."
// Output: False

// Input:  "Cwm fjord bank glyphs vext quiz."
// Output: True
// Author: Vaibhav

#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

int sec_largest(vector<int>arr)
{
    set<int>arr_uni;
    
    for(int k : arr)
    {
        for(int j: arr)
        {
            if(k > j)
            {
                int temp = k;
                k = j;
                j = temp;
            }
        }
    }
    for(int k : arr){
        arr_uni.insert(k);
    }
    if(arr_uni.size() < arr.size()){
        return -1;
    }else{
        return arr[arr_uni.size() - 2];
    }
    
}

int main()
{
    vector<int>arr;
    int num;
    cout<<"Enter How Many Numbers U want to put in array :";
    cin>>num;
    int temp;
    for(int i = 0;i<num;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }

    int result = sec_largest(arr);

    cout<<"Second Largest Element :"<<result;
    return 0;
}
