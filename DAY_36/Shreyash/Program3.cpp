#include<iostream>
#include<cmath>
using namespace std;

int hcf(int num1,int num2)
{
    int minn = min(num1,num2);
    int hcf = 0;
    if(num1 == 0||num2 == 0){
        hcf = num1+num2;
        return hcf;
    }else if(num1 == num2){
        hcf = num1;
        return hcf;

    }else{
        for(int i = 1;i<minn;i++){
            if(num1%i == 0 && num2%i == 0)
            {
                hcf = i;
                
            }

        }
    }
    return hcf;

    
}

int main()
{
    int num1;
    cout<<"num1 :";
    cin>>num1;
    int num2;
    cout<<"num2 :";
    cin>>num2;
    int result = hcf(num1,num2);
    cout<<"HCF for given Inputs: "<<result; 
    return 0;
}
