// Q.3 Write a program to check whether given number is Xylem or Phloem Number.
// Explaination:
// a) Extream digits means first and last digits.
// b) Mean digits means other than extream digits.

// Input: Enter a number: 825122
// Output:
// The sum of extreme digits: 10
// The sum of mean digits: 10
// 825122 is a xylem number.

// Input: Enter a number: 761312
// Output:
// The sum of extreme digits: 9
// The sum of mean digits: 11
// 761312 is a phloem number.
// Author: Shreyash

#include<iostream>
using namespace std;


bool xylemorphloem(string num)
{

        int sumex = (int(num[0])-48)+(int(num[num.length()-1])-48);
        int summean = 0;
        for(int i = 1;i<num.length()-1;i++)
        {
            summean = summean + int(num[i])-48;
        }

        if(sumex == summean)
        {
            return true;
        }
        else
        {
            return false;
        }

    
}    
int main(){
    string num;
    cout<<"NUm :";
    cin>>num;
    if(xylemorphloem(num))
    {
        cout<<num<<" is a xylem number.";
    }else{
        cout<<num<<" is a phloem number.";
    }
    return 0;
}

