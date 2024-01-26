#include<iostream>
#include<set>
#include<sstream>
#include<algorithm>
using namespace std;

string removeduplistr(string str)
{
  int c = 0;
  for(int i = 0;i<str.length();i++)
  {
    for(int j = 0;j<str.length();j++)
    {
      if(str[i] == str[j]){
        c++;
      }
    }
    if(c%2 != 1)
    {
      str[i] = 'z';
    }
    c = 0;
  }
  return str;
}

bool equalornnot(string str,string str1)
{  
    string str01 = removeduplistr(str);
    string str02 = removeduplistr(str1);

    if(str01.length() == str02.length())
    {
        int count = 0; 
        for(int i = 0;i<str01.length();i++)
        {
            for(int j = 0;j<str02.length();j++)
            {
                if(str01[i] == str02[j])
                {
                    count++;
                }
            }
        }
        // cout<<count<<" "<<str01.length();
       
        if(count == str01.length())
        {
            return true;
        }
    }
    
    return false;
}    
int main(){
    string str;
    cout<<"Enter The String 1:";
    cin>>str;
    string str1;
    cout<<"Enter The String 2:";
    cin>>str1;
    if(equalornnot(str,str1))
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}

