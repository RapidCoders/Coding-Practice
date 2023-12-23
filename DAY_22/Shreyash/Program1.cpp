// Q.1 Write a program which accept a string from user and return the count of number of words in that string.
// Input: Maze gaon kokan ahe. Mazya gavashejari samudra ahe.
// Output: 8

// Input:
// Output: 0
// Author: Vaibhav

#include<iostream>
using namespace std;

int apha_counter(string str)
{
    int count = 0;
    for(char i : str){
        if(i == ' '){
            count++;
        }
    }
    return count+1;
}

int main(){

    string str;
    cout<<"Enter Input String :";
    getline(cin,str);
    int count = apha_counter(str);
    // cout<<count<<endl;
    if(count > 1){
        cout<<"Count :"<<count;
    }else{
        cout<<0;
    }
    return 0;
    
}
