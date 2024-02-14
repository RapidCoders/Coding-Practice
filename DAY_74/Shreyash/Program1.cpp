// Q.1 Write a program that takes two arrays of integers as input and returns True if one array is a rotation of the other array, and False otherwise. A rotation occurs when elements are shifted circularly to the left or right.
// Input: [1, 2, 3, 4, 5], [1, 2, 3, 4, 5]
// Expected Output: True

// Input: [1, 2, 3, 4, 5], [4, 5, 1, 2, 3]
// Expected Output: True

// Input: [1, 2, 3, 4, 5], [3, 4, 5, 1, 2]
// Expected Output: True

// Input: [1, 2, 3, 4, 5], [1, 2, 3, 4, 6]
// Expected Output: False

// Input: [], []
// Expected Output: True
// Author: Vaibhav


#include<iostream>
#include<vector>
using namespace std;

bool is_rotationof(vector<int>arr0,vector<int>arr1)
{
  int count = 0;
  for(int i : arr0)
  {
    for(int j : arr1)
    {
      if(i == j)
      {
        count++;
      }
    }
  }
  if(count == arr1.size())
  {
    return true;
  }

  return false;
}

int main()
{
  vector<int>arr;
  vector<int>arr1;
  int num;
  cin >> num;
  for(int i = 0;i<num;i++)
  {
    int temp;
    cin >> temp;
    arr.push_back(temp);
  }
  int num1;
  cin >> num1;
  for(int i = 0;i<num1;i++)
  {
    int temp1;
    cin >> temp1;
    arr1.push_back(temp1);
  }
  if(is_rotationof(arr,arr1))
  {
    cout << "True";
  }
  else{
    cout << "False";
  }
  
  return 0;
}
