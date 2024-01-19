// Q.1 Write a function that takes a sentence as input and returns the count of unique words in the sentence. Ignore case and punctuation when counting words.
// Input: "The cat in the hat, the hat on the mat."
// Expected Output: 7

// Input: "The quick brown Fox jumps over the Lazy Dog."
// Expected Output: 8

// Input: ""
// Expected Output: 0

// Input: "Coding is fun! Coding is creative, and coding is rewarding."
// Expected Output: 6

// Input: "The cat in the hat is the cat on the mat."
// Expected Output: 7

// Input: "There are 10 types of people in the world: those who understand binary and those who don't."
// Expected Output: 15
// Author: Vaibhav

#include<iostream>
#include<set>
#include<sstream>
#include<algorithm>
using namespace std;

int uniquecount(string str){
    string new_str;
    set<string>uni;
    for(char i: str){
        if(i == ','||i == '.'||i == '!'||i == '?'){
            char sp = ' ';
            new_str.push_back(sp);
        }else{
            new_str.push_back(i);
        }
    }
    string s;
    stringstream ss(new_str);
    while (getline(ss, s, ' ')) {
 
        uni.insert(s);
    }
    if(uni.size() == 1){
        return 0;
    }
    
    return uni.size();

}

int main(){
    string str;
    getline(cin,str);
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<uniquecount(str);

    return 0;
}



