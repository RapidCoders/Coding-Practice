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
