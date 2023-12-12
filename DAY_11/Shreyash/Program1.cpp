#include<iostream>
#include<algorithm>
using namespace std;

void palindrom(string str)
{
  string rstr;
  string ostr;
  string new_str;
  for (char i : str)
    {
        if (i == '!' || i == ',' ||i == '.' || i == '-' || i == '?'|| i == '\'' || i == ';' || i == '\"'||i == ' '){
          rstr = ""+rstr;
          ostr = ostr + "";
          continue;
        }
        else{
          rstr =i+rstr;
          ostr = ostr + i;
        }
    }
  // cout<<rstr;
  if(ostr == rstr){
    cout<<"True";
  }
  else{
    cout<<"False";
  }

}

int main() 
{
  string str;
  getline(cin,str);
  transform(str.begin(), str.end(), str.begin(), ::tolower);
  palindrom(str);
  return 0;
}
