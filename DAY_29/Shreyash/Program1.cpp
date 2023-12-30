// Q.1 Write a program that takes a string as input and reverses the order of words in the string.
// The input and output of funtion should be string type

// Input: "Hello World"
// Output: "World Hello"

// Input: "Programming is fun"
// Output: "fun is Programming"
// Author: Vaibhav

#include<iostream>
#include<vector>
using namespace std;

string reverse_strOrd(string str)
{
    string restr = "";
    for(int i = str.length()-1;i>=0;i--){
        if(str[i] == ' '){
            for(int j = i+1;j<=str.length();j++){
                if(str[j] != ' '){
                    restr = restr +str[j];
                
                }else{
                    break;
                }
            }
            restr = restr + ' ';
             
        }
    }
    return restr;
}


int main()
{

    string str;
    getline(cin,str);
    str = " "+str;
    string temp = reverse_strOrd(str);
    cout<<temp;
    return 0;

}
