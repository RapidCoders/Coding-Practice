#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

bool panagram(string str)
{
    set<char>alpha;
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]>=97 && str[i]<=122){
            alpha.insert(str[i]);
        }

    }
    cout<<alpha.size();
    if(alpha.size() == 26)
    {
        return true;
    }

    return false;
}

int main()
{
    string str;
    cout<<"Enter string :";
    getline(cin,str);
    bool flag = panagram(str);
    if(flag)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}
