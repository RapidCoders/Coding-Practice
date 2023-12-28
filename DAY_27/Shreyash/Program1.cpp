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
