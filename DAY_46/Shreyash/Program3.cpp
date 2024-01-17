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
