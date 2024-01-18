// Q.1 Write a program that takes a list of integers as input and returns True if the numbers form a consecutive sequence (in ascending order) and False otherwise.
// Input: [1, 2, 3, 4, 5]
// Expected Output: True

// Input: [10, 12, 14, 16, 18]
// Expected Output: True

// Input: []
// Expected Output: False

// Input: [7]
// Expected Output: True

// Input: [-3, -2, -1, 0, 1]
// Expected Output: True

// Input: [4, 5, 6, 8, 9]
// Expected Output: False
// Author: Vaibhav

#include<iostream>
#include<vector>
using namespace std;

bool sorted_asc(vector<int>arr)
{
    vector<int>arr_new;
    for(int k:arr){
        arr_new.push_back(k);
    }
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<arr.size();j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int count = 0;
    for(int i = 0;i<arr.size();i++){
        if(arr[i]==arr_new[i]){
            count++;
        }
    }
    if(count == arr.size()){
        return true;
    }

    return false;
}    

int main()
{
    vector<int>arr;
    int num;
    int temp;
    cout<<"num :";
    cin>>num;
    for(int i = 0;i<num;i++){
        cin>>temp;
        arr.push_back(temp);

    }
    if(sorted_asc(arr)){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}
