#include<iostream>
using namespace std;

string alphashifter(string str,int shift)
{
    if(shift > 0)
    {
        for(int i = 0;i<str.length();i++){
        str[i] = str[i] + shift; 
        }
    }
    else if(shift < 0)
    {
        for(int i = 0;i<str.length();i++)
        {
        str[i] = str[i] + shift; 
        }
    }
    else
    {
        return str;
    }
    
    
    return str;
}    
int main(){
    string str;
    cout<<"Enter The String :";
    int shift;
    cin>>str;
    cout<<"Shift of :";
    cin>>shift;
    cout<<"Shifted string : "<<alphashifter(str,shift);

    return 0;
}

