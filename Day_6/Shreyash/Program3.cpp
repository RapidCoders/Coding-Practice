// Q3. Write a program which accept number and Replace All 0’s With 1 .
// Input: 900120678
// Output:911121678

// Input: 84850060
// Output:84851161

// Author: Shreyash


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
    int number = stoi(num_str);
    cout<<number<<endl;
}

int main()
{
    long int num;
    cin>>num; 
    replacer(num);
    return 0;
}
