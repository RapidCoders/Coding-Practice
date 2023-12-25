// Q.1 You are given an array containing n distinct numbers taken from the range 0 to n. One number is missing from the array. Write a function to find and return the missing number.
// Constraints: 1 <= arr[i] <= 100

// Input: 5
// Input: [1, 2, 3, 4, 6]
// Output: 5

// Input: 8
// Input: [1, 2, 3, 4, 5, 6, 7, 9]
// Output: 8

// Input: 4
// Input: [5, 2, 4, 1]
// Output: 3

// Input: 8
// Input: [8, 3, 6, 1, 5, 2, 4, 9]
// Output: 7

// Input: 8
// Input: [2, 1, 4, 5, 3, 8, 7, 6]
// Output: 9
// Author: Vaibhav

#include <iostream>
#include <vector>
using namespace std;



void missing_finder(vector<int>arr,int num)
{
    for(int i = 0;i<arr.size();i++){
        for(int j = 1;j<arr.size();j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int miss ;
    for(int i = arr[0];i<arr[0]+arr.size();i++){
        for(int j = 0;j<arr.size();j++){
            if(arr[j]!=i){
                miss = i;
            }
        }
    }
    cout<<miss-1;
}


int main() {
    vector<int>arr;
    int num;
    cout << "Number: ";
    cin >> num;
    int temp;
    for(int i = 1;i<=num;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    missing_finder(arr,num);
    return 0;
}

