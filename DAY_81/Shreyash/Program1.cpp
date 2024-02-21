// Q.1 Write a function that takes a list of integers as input and returns another list where each element is the sum of the absolute differences between that element and all other elements in the list.
// Input: [2, 4, 6, 8]
// Output: [12, 8, 8, 12]
// Explanation:
// For the first element (2), the absolute differences with other elements are |2-4| + |2-6| + |2-8| = 2 + 4 + 6 = 12.
// Similarly, for the second element (4), the absolute differences are |4-2| + |4-6| + |4-8| = 2 + 2 + 4 = 8.
// The same process applies to other elements.

// Input: [-3, -1, 0, 2, 5]
// Expected Output: [18, 12, 11, 13, 22]

// Input: [1, 1, 1, 1]
// Expected Output: [0, 0, 0, 0]

// Input: [9]
// Expected Output: [0]

// Input: []
// Expected Output: []
// Author: Vaibhav



#include<iostream>
#include<vector>
using namespace std;


int sub_sum(vector<int>arr,int j)
{
  int sum = 0; 
  for (int i = 0; i < arr.size(); i++)
  {
    int sub = 0;
    if(arr[i] != j)
    {
      sub = arr[i]-j;
      if(sub > 0)
      {
        sum += (sub);
      }else{
        sum = sum + (-1)*(sub);
      }
    }
    
  }
  return sum;
}

int main()
{
  vector<int>arr;
  int num;
  cin >> num;
  for (int i = 0; i < num; i++)
  {
    int temp;
    cin >> temp;
    arr.push_back(temp);
  }
  for (int j : arr)
  {
    cout << sub_sum(arr,j) <<" ";
  }
  
  return 0;
}
