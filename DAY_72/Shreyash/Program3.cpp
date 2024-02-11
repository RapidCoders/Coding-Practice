// Q.3 write a program to capitalize the first and last letter of each word of a string.
// Input : str = "Prep insta"
// Output : PreP InstA

// Input : str = "my name is shreyash gaikwad."
// Output : MY NamE IS ShreyasH GaikwaD.
// Author: Shreyash

#include<iostream>
#include<vector>
using namespace std;

void split(string str)
{
    vector<string>arr;
    string substr = "";
    for(char i:str)
    {
        if(i != ' ')
        {
            substr += i;
        }else{
            arr.push_back(substr);
            substr = "";
        }
    }
    for(int i = 0;i < arr.size();i++)
    {
      for(int j = 0;j <arr[i].length();j++)
      {
        if(j == 0||j == arr[i].length()-1)
        {
          arr[i][j] = arr[i][j] - 32;
        }
      }
      
    }

    for(string strr:arr)
    {
      cout << strr << " ";
    }
    

}

int main()
{
  string str;
  getline(cin , str);
  split(str);
  return 0;
}
