#include<iostream>
#include<algorithm>
using namespace std;

string encoding(string str,char sym)
{
    for(int i = 0;i<str.length();i++)
    {
        if(str[i] == 'b'||str[i] == 'c'||str[i] == 'd'||str[i] == 'f'||str[i] == 'g'||str[i] == 'h'||str[i] == 'j'||str[i] == 'k'||str[i] == 'l'||str[i] == 'm'||str[i] == 'n'||str[i] == 'p'||str[i] == 'q'||str[i] == 'r'||str[i] == 's'||str[i] == 't'||str[i] == 'v'||str[i] == 'w'||str[i] == 'x'||str[i] == 'y'||str[i] == 'z')
        {
            str[i] = sym;
        }
    }
    return str;
}

int main()
{
    string str;
    getline(cin,str);
    char sym;
    cout<<"Enter symbol :";
    cin>>sym;
    for (auto& x : str) { 
        x = tolower(x); 
    }
    cout<<encoding(str,sym);

    return 0;
}
