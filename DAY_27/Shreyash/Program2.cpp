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
