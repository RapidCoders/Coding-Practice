#include<iostream>
using namespace std; 

void replacer(long int num){
    string num_str; 
    num_str=to_string(num); 
    for(int i=0;i<num_str.length();i++)
    {
        if(num_str[i]=='0')
        {
        num_str[i]='1';
        }
    } 
    cout<<num_str<<endl;
}

int main()
{
    long int num;
    cin>>num; 
    replacer(num);
    return 0;
}
