#include<iostream>
using namespace std;
int main()
{
    int x=0,a=0,y=0,b=0;
    cin>>x>>a>>y>>b;
    double r = (y * b - x * a)*1.0 / (b - a);
    printf("%0.2f",r);
    return 0;
}