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
