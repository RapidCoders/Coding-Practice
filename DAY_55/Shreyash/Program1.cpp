#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int decimal_binary(int num)
{
  vector<int>arr;
  int sum = 0;
  int mod;
  int reminder;
  string str = " ";
  while(num>0)
  {
    mod = num%2;
    string character = to_string(mod);
    num = num/2;
    str =character+str;
  }
  for(int i = 0;i<str.length();i++){
    if(str[i] == '1')
    {
      for (int j = i+1; j < str.length(); j++)
      {
         if(str[j] == '1'){
          break;
         }else{
          sum++;
         }
         
      }
      arr.push_back(sum);  
      sum = 0;
    }
    
  }
  sort(arr.begin(),arr.end());
  if(arr[arr.size()-1] > 0){
    return arr[arr.size()-1];
  }
  return 0;
}

int main()
{
    int num;
    cout<<"Num : ";
    cin>>num;
    if(num == 0){
      cout<<"0";
    }else{
      cout<<decimal_binary(num);
    }
    return 0;
}
