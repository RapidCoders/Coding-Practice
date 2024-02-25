// Q.3 Given a sorted array arr[] of size N. Find the element that appears only once in the array. All other elements appear exactly twice.
// Input:
// Input:
// N = 11
// arr[] = {1, 1, 2, 2, 3, 3, 4, 50, 50, 65, 65}
// Output: 4
// Explanation: 4 is the only element that 
// appears exactly once.


// Author: Shreyash

#include<iostream>
#include<vector>
using namespace std;

int counter(int a,vector<int>arr)
{
    int count = 0;
    for(int i:arr)
    {
        if(a == i)
        {
            count++;
        }

    }
    return count;
}

int main()
{
    vector<int>arr;
    int num;
    cin >> num;
    for(int i = 0; i<num;i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    
    for (int j : arr)
    {
        if(counter(j,arr) == 1)
        {
            cout << j;
            break;
        }
    }
    

    return 0;
}
