#include <iostream>  
using namespace std;  

int sum(int n)
{
    int sum=0,m;
    while(n>0)    
    {    
    m=n%10;    
    sum=sum+m;    
    n=n/10;    
    }    
    cout<<"Sum is = "<<sum<<endl;
    return 0;
}
int main()  
{  
    int n;    
    cout<<"Enter a number: ";    
    cin>>n; 
    cout<<sum(n);
    return 0;  
}  
