// Q.1 Given a string, find the first non-repeating character and return its index. If it doesn't exist, return -1.
// Input: "leetcode"
// Output: 0

// Input: "loveleetcode"
// Output: 2
// Author: Vaibhav


#include<iostream>
using namespace std;

int firstnonrepeatchar(string str)
{
    int count = 0;
    for(int i = 0;i<str.length();i++){
        for(int j = 0;j<str.length();j++){
            if(str[i]==str[j]){
                count++;
            }


        }
        if(count == 1){
            return i;
            break;
        }
        count = 0;
    }
    return -1;
}

int main()
{
    string str;
    cin>>str;
    int result = firstnonrepeatchar(str);
    if(result > 0){
        cout<<result;
    }else{
        cout<<"All Char of String is reapeated";
    }
    return 0;
}
