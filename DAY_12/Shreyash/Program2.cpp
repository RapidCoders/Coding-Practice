// Q.2 Program to replace lower-case characters with upper-case and vice versa.
// Input: str1 = "Great Power"  
// Output: String after case conversion : gREAT pOWER
// Author: Suyash
	
#include<iostream>
using namespace std;

string changer(string str){
    for(int i=0;str[i]!='\0';i++)
	{
		if (str[i]>=65 && str[i]<=90 )    
			str[i] = str[i] + 32;         
		else if (str[i]>=97 && str[i]<=122 )
		    str[i] = str[i] - 32;              
	}
    return str;
}

int main()
{
    string str; 
    cout<<"Enter the String: ";
    getline(cin,str);
    cout<<changer(str);
    return 0;
}
