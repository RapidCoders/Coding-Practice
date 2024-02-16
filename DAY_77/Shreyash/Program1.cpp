// Q.1 Write a function that takes a list of integers as input, where each integer appears an even number of times except for one, which appears an odd number of times. The function should return the integer that appears an odd number of times.
// Input: [1, 2, 3, 2, 1, 3, 4, 4, 5]
// Expected Output: 5

// Input: [-1, 2, 3, 2, -1, 3, 4, 4, 5]
// Expected Output: 5

// Input: [1000000, 2, 3, 2, 1000000, 3, 4, 4, 999999]
// Expected Output: 999999

// Input: [-1, -2, -3, -2, -1, -3, -4, -4, -5]
// Expected Output: -5

// Input: []
// Expected Output: None
// Author: Vaibhav

#include<iostream>
#include<vector>

int oddt_appears(std :: vector<int>arr)
{
  int count = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    for(int j = 0;j < arr.size(); j++)
    {
      if(arr[i] == arr[j])
      {
        count++;
      }
    }
    if(count%2 == 1)
    {
      return arr[i];
    }
    count = 0;
  }
  return -1;
}


int main()
{
  std :: vector<int>arr;
  int num;
  std :: cout << "How many Element u want in array :";
  std :: cin >> num;
  for (int i = 1; i <= num; i++)
  {
    int temp;
    std :: cout << "Enter " << i << " Element : ";
    std :: cin >> temp;
    arr.push_back(temp);
  }
  std :: cout << oddt_appears(arr);
  return 0;
}
