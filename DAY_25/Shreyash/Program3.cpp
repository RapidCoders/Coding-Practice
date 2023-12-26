#include<iostream>
#include<vector>
using namespace std;

void length_last(string str)
{
        int i = str.size() - 1;
        while (i >= 0 && str[i] == ' ') {
            --i;
        }
        int j = i;
        while (i >= 0 && str[j] != ' ') {
            --j;
        }
        cout<< i - j;

}

int main()
{
    string str;
    getline(cin,str);
    length_last(str);
    return 0;
}
