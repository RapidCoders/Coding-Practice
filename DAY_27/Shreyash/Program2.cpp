
// Q.2 Program to check whether a given number is Tech number or not.
// Explanation : A number is called a tech number if the given number has an even number of digits and the number can be divided exactly into two parts from the middle. After equally dividing the number, sum up the numbers and find the square of the sum. If we get the number itself as square, the given number is a tech number, else, not a tech number. For example, 3025 is a tech number.

// Input: 3025

// Output: Tech Number
// Author: Suyash

Q.3 Write program program to remove brackets (),{},[] from an algebraic expression.
Input: a+b(/(c*c
Output:a+b/c*c
Author: Shreyash

#include <iostream>
#include <string>
using namespace std;

void tech_num(int num)
{
    int mod = 0;
    int temp = num;
    int counter = 0;
    while(temp > 0){
        temp = temp/10;
        counter++;
    }
    int sum = 0;
    if(counter%2 == 0)
    {
        string str = to_string(num);
        string str1 = "";
        string str2 = "";
        for(int i = 0;i<=(str.length()/2)-1;i++)
        {
            str1 = str1 + str[i];
        }
        for(int j = str.length()/2;j<=str.length();j++)
        {
            str2 = str2 + str[j];
        }
        sum = stoi(str1)+stoi(str2);
        int mod = 0;
        int sqr = 0;
        for(int i = 1;i<=sum;i++)
        {
            sqr = i * sum;
        }
        if(sqr == num)
        {
            cout<<"Tech Number";
        }else{
            cout<<"Not Tech Number";
        }
    }else
    {
        cout<<"Not Tech number";
    }
}

int main()
{
    int num;
    cout<<"Input: ";
    cin>>num;
    tech_num(num);
    return 0;
}
