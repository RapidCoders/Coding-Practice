#include<iostream>

int position(char c)
{
    int pos = 1;
    for(int i = 97; i < c;i++)
    {
        pos++;
    }
    return pos;
}

int main()
{
    char c;
    std :: cin >> c;
    if(c >= 97 && c <= 122)
    {
        unsigned int res = position(c);
        std :: cout << res;
    }
    else
    {
        std :: cout << "None";
    } 
    return 0;
}
