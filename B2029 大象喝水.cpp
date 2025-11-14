#include<iostream>
using namespace std;
int main()
{
    int h = 0,r = 0;
    cin>>h>>r;
    double v = 3.14*r*r*h;
    cout<<int(20/v*1000)+1;
    return 0;
}