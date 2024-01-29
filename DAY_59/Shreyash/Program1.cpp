#include<iostream>
using namespace std;

void changer(string *ptr , char first,char sec)
{
    for (int i = 0;i < ptr->length();i++)
    {
        if((*ptr)[i] == first)
         (*ptr)[i] = sec;   
        else if((*ptr)[i] == sec)
          (*ptr)[i] = first;

    }

}


int main()
{
    string str;
    string *ptr = &str;
    getline(cin,str);
    char first;
    char sec;
    cin >> first >> sec;
    changer(ptr , first ,sec);
    cout<<str;
    return 0;

}
