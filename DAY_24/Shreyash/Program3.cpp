// Q.3 Find minimum and maximum element in an array.
// Input:
// N = 6
// A[] = {3, 2, 1, 56, 10000, 167}
// Output: 1 10000
// Explanation: minimum and maximum elements of array are 1 and 10000.

// Input:
// N = 5
// A[]  = {1, 345, 234, 21, 56789}
// Output: 1 56789
// Explanation: minimum and maximum element of array are 1 and 56789.
// Author: Shreyash

#include <iostream>
#include <vector>
using namespace std;

void max_min(vector<int>arr)
{
     for(int i=0; i<arr.size(); i++)
    {
        for(int j=i+1; j<arr.size(); j++) 
        { 
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<arr[0]<<" "<<arr[arr.size()-1];
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
    max_min(arr);
    return 0;
}
