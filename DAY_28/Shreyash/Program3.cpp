#include <iostream>
#include <string>
using namespace std;

void quadrant(int x,int y)
{
    if(x > 0 && y> 0){
        cout<<x<<","<<y<<" Belongs to First Quadrant";
    }
    else if(x < 0 && y > 0){
        cout<<x<<","<<y<<" Belongs to Second Quadrant";
    }
    else if(x <  0 && y < 0){
        cout<<x<<","<<y<<" Belongs to Third Quadrant";
    }
    else if(x == 0 && y == 0){
        cout<<x<<","<<y<<" It is an Origin";
    }
    else if(x == 0 && y > 0){
        cout<<x<<","<<y<<" It is on y axis";
    }
    else if(x >= 0 && y == 0){
        cout<<x<<","<<y<<" It is on x axis";
    }
    else if(x == 0 && y < 0){
        cout<<x<<","<<y<<" It is on Negative y axis";
    }
    else if(x < 0 && y == 0){
        cout<<x<<","<<y<<" It is on Negative x axis";
    }
    else{
        cout<<x<<","<<y<<" Belongs to Fourth Quadrant";
    }
}

int main()
{
    int x;
    cout<<"X: ";
    cin>>x;
    int y;
    cout<<"Y: ";
    cin>>y;
    quadrant(x,y);
    return 0;
}
