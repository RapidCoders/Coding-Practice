
// Q.3 Write an algorithm to determine if a number n is happy Return true if n is a happy number, and false if not.
// Input: n = 19
// Output: true
// Explanation:
// 1^2 + 9^2 = 82
// 8^2 + 2^2 = 68
// 6^2 + 8^2 = 100
// 1^2 + 0^2 + 0^2 = 1

// Input: n = 2
// Output: false
// Author: Shreyash

#include<iostream>
#include<cmath>
using namespace std;

int happy(int num)
{
    int sum = 0,rem = 0; 
    while (num > 0){
        rem = num%10;  
        sum = sum + (rem*rem);  
        num = num/10;

    }
    return sum;
}    

int main()
{
    int num;
    cout<<"num :";
    cin>>num;
    int result = num;
    while(result != 1 && result != 4){
        result = happy(result);
    }

    if(result == 1){
        cout<<"True";
    }else if(result == 4){
        cout<<"False";
    }    
    return 0;
}
