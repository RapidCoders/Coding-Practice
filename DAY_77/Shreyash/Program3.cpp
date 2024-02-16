// Q.3 Given an unsorted array of size N. Find the first element in array such that all of its left elements are smaller and all right elements to it are greater than it.
// Input:
// N = 4
// A[] = {4, 2, 5, 7}
// Output: 5
// Explanation : Elements on left of 5 are smaller than 5and on right of it are greater than 5.

// Input:
// N = 3
// A[] = {11, 9, 12}
// Output: -1
// Author: Shreyash

#include<iostream>
#include<vector>

int ls_rg(std :: vector<int>arr)
{
  for (int i = 1; i < arr.size()-1; i++)
  {
    if(arr[i] > arr[i -1] &&arr[i] < arr[i + 1])
    {
      return arr[i];
    }
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
  std :: cout <<"Element "<< ls_rg(arr)<<" have left elements smaller & right element greater.";
  return 0;
}
