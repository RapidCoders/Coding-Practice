// Q.2 Program to print the elements of an array present on even position
// Input:
// arr = [1, 2, 3, 4, 5]  

// Output:
// Elements of given array present on even position:
// 2
// 4
// Author: Suyash

#include<iostream>
#include<vector>
using namespace std;

void printevenposi(vector<int>arr)
{
    for (int i = 0;i < arr.size();i++ )
    {
        if (i%2 == 1){
            cout<<arr[i]<<" ";
        }
    }
}


int main()
{
    vector<int>arr;
    int num;
    cin>>num;
    int temp;
    for (int i = 1;i <= num; i++)
    {
        cin>>temp;
        arr.push_back(temp);
        
    }
    printevenposi(arr);
    

    return 0;
}
