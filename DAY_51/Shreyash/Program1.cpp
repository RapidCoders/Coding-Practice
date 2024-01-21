// Q.1 Write a function that takes three strings as input and checks whether the third string is formed by interleaving the characters of the first two strings while maintaining the order of characters.
// Input: str1 = "abc", str2 = "def", interleaved = "adbcef"
// Expected Output: True

// Input: str1 = "abc", str2 = "def", interleaved = "abcde"
// Expected Output: False

// Input: str1 = "abc", str2 = "def", interleaved = "adbecf"
// Expected Output: True

// Input: str1 = "abc", str2 = "def", interleaved = "acdbef"
// Expected Output: False

// Input: str1 = "", str2 = "", interleaved = ""
// Expected Output: True
// Author: Vaibhav



#include<iostream>
using namespace std;

bool containallalpha(string new_str,string interleaved){
    int counter = 0;
    for(int i = 0;i<new_str.length();i++){
        for(int j = 0;j<interleaved.length();j++){
            if(new_str[i] == interleaved[j]){
                counter++;
            }
        }
        
    }
    if(counter == new_str.length()){
        return true;
    }
    
    return false;
}    
int main(){
    string str1;
    cout<<"Enter First String :";
    cin>>str1;
    string str2;
    cout<<"Enter Second String :";
    cin>>str2;
    string interleaved;
    cout<<"Enter Interleaved String :";
    cin>>interleaved;
    // string str1 = "";
    // string str2 = "";
    // string interleaved = "";
    string new_str = str1+str2;
    if(containallalpha(new_str,interleaved)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}


