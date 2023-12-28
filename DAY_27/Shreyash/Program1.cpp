// Q.1 Write a function that takes a string containing only the characters '(', ')', '{', '}', '[' and ']' and determines if the input string is valid. An input string is valid if:
// a. Open brackets must be closed by the same type of brackets.
// b. Open brackets must be closed in the correct order.

// Input: "()"
// Output: True

// Input: "()[]{}"
// Output: True

// Input: "(]"
// Output: False

// Input: "([)]"
// Output: False

// Input: "{[]}"
// Output: True
// Author: Vaibhav

#include<iostream>
#include<stack>
using namespace std;

bool valid_parentheses(string str)
{
    stack<char>st;
    int n = str.size();
    // bool ans = true;
    for(int i = 0;i<n;i++)
    {
        if(str[i] == '('||str[i]=='{'||str[i]=='[')
        {
            st.push(str[i]);
        }

        if((st.top()=='(' && str[i]==')')||(st.top()=='{'&&str[i]=='}')||(st.top()=='[' && str[i]==']'))
        {
            st.pop();

        }
    
        
    }
    if(st.empty()){
        return true;
    }else{
        return false;
    }
    
    
}
    

int main()
{
    string str;
    getline(cin,str);
    bool ret = valid_parentheses(str);
    if(ret){
        cout<<"True";
    }else{
        cout<<"False";
    }
    
}
