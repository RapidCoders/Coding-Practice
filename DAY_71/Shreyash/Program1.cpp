// Q.1 Write a function that takes a list of integers as input and returns the product of all non-zero digits in the list.
// Input: [0, 2, 3, 0, 4, 5]
// Expected Output: 120

// Input: [0, 0, 0, 0]
// Expected Output: 1

// Input: [0, 0, 0, 5]
// Expected Output: 5

// Input: [-2, 0, -3, 0, 4, -5]
// Expected Output: -120

// Input: [10, 20, 0, 30, 40]
// Expected Output: 240000
// Author: Vaibhav


#include<iostream>
#include<vector>

int product(std :: vector<int>arr)
{
  int pro = 1;
  for (int i = 0; i < arr.size(); i++)
  {
    if(arr[i] != 0)
    {
      pro *= arr[i];
    }
  }
  return pro;
  
}

int main()
{
  std::vector<int>arr;
  int num;
  std :: cin >> num;
  for(int i = 0;i<num;i++)
  {
    int temp;
    std :: cin >> temp;
    arr.push_back(temp);
  }

  std :: cout << "Product of non- zero elements :" << product(arr);
  return 0;
}
