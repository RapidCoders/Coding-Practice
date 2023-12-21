#include<iostream>
#include<algorithm>
using namespace std;

bool anagram_checker(string str,string str1)
{
    if (str.length() != str1.length())
    {
        return false;
    }
    // sort(str.begin(),str.end());
    // sort(str2.begin(),str2.end());
    char ch;
    for(int i = 0;i < str.length();i++)
    {
       for (int j = 0; j < str.length()-1; j++)
       {
        if(str[j] > str[j+1]){
            ch = str[j];
            str[j] = str[j+1];
            str[j+1] = ch;
            
        }
        if(str1[j] > str1[j+1])
        {
            ch = str1[j];
            str1[j] = str1[j+1];
            str1[j+1] = ch;
            
        }
       }
    }


    for(int i = 0;i<=str.length()-1;i++)
    {
        if(str[i] != str1[i]){
            return false;
        }
    }
    return true;
    

}

int main()
{
    string str;
    getline(cin,str);
    string str2;
    getline(cin,str2);
    if(anagram_checker(str,str2)){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}
