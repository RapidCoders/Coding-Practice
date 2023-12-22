// Q.1 Write a function to rotate an array of integers to the right by a given number of steps. The function should take an array of integers and the number of steps as parameters and modify the array in-place.
// Input:
// Array: {1, 2, 3, 4, 5}
// Steps: 2

// Output:
// Rotated Array: {4, 5, 1, 2, 3}

// Input:
// Array: {1, 2, 3, 4, 5}
// Steps: 7

// Output:
// Rotated Array: {4, 5, 1, 2, 3}


#include<iostream>
#include<vector>
using namespace std;

vector<int> index_shifter(vector<int>arr,int steps)
{
    vector<int>new_arr;
    for(int j = arr.size()-steps;j<arr.size();j++){
        new_arr.push_back(arr[j]);
    } 
    for(int i = 0;i<arr.size()-steps;i++){
        new_arr.push_back(arr[i]);

    }
    return new_arr;
}

int main(){
    int num;
    int steps;
    cout<<"num :";
    cin>>num;
    vector<int>arr;
    int temp;
    for(int i = 1;i<=num;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"steps :";
    cin>>steps;

    vector<int>new_arr = index_shifter(arr,steps);
	cout<<"{";
	for(int i:new_arr){
        cout<<i<<",";
    }
	cout<<"}";
    
}
