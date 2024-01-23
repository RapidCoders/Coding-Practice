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

