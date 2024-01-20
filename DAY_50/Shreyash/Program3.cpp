
// Q.3 Write a Program to convert string into upper_lower case character by character.
// Input: Str = "Twinkle twinkle little star, how I wonder what you are!"
// Output:"TwInKlE TwInKlE LiTtLe StAr, hOw i wOnDeR WhAt yOu aRe!"

// Author: Shreyash

#include<iostream>
using namespace std;

void upperlower(string str){
    for(int i = 0;i<str.length();i++)
    {
        if(i%2 == 0 && str[i] != ' '&& str[i] != ','&& str[i] != '.'&& str[i] != '!'&& str[i] != '?')
        {
            str[i] = str[i]-32;
        }
        
    }
    cout<<str;
}    
int main()
{
    string str;
    getline(cin,str);
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    upperlower(str);
    return 0;
}

