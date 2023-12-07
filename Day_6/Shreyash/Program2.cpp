#include<iostream>
using namespace std;

int count_symbols(string text)
{
    int counter = 0;

    for (char i : text)
    {
        if (i == '!' || i == ',' ||i == '.' || i == '-' || i == '?'|| i == '\'' || i == ';' || i == '\"'){
            counter = counter + 1;
        }
    }
    return counter;
}

int main(void)
{
    string text;
    cout << "Enter the text: ";
    getline(cin,text);
    cout << "Total number of punctuation characters exists in string: " << count_symbols(text);
    return 0;
}
