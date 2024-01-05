
// Q.3 Program to Convert Decimal to Hexadecimal.
// Input:  num = 10
// Output: a.

// Input:  num = 15
// Output: f.

// Input:  num = 289
// Output: 121.
// Author: Shreyash

#include<iostream>
using namespace std;

string decimaltohexa(int num)
{
    string str = "";
    int reminder;
    int result;
    while(num > 0)
    {
        reminder = num%16;
        if(reminder == 10){
            str = str + "a";
        }
        else if(reminder == 11)
        {
            str = str + "b";

        }
        else if(reminder == 12)
        {
            str = str + "c";

        }
        else if(reminder == 13)
        {
            str = str + "d";

        }
        else if(reminder == 14)
        {
            str = str + "e";

        }
        else if(reminder == 15)
        {
            str = str + "f";

        }
        else{
            str = str + to_string(reminder);
        }
        num = num/16;
    }


    return str;
}

int main()
{
    int num;
    cout<<"Enter Decimal Number :";
    cin>>num;
    string result = decimaltohexa(num);
    cout<<result; 
    return 0;
}
