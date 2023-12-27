#include <iostream>
#include <vector>
using namespace std;

char least_apha(string str)
{
    int counter = 0;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                counter++;
            }
        }
        if (counter == 1)
            return str[i];
        counter = 0;
    }
    return '\0';
}

int main()
{
    string str;
    getline(cin, str);
    char ret = least_apha(str);

    if (ret != '\0')
    {
        cout<<ret;
    }
    else
    {
        cout<<"Not Found";
    }
    
    
    return 0;
}
