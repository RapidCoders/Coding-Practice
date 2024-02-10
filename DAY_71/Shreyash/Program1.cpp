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
