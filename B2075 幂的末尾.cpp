#include<iostream>
using namespace std;

int main() {
    int a = 0,b = 0,step = 0;
    cin>>a>>b;
    step = a;
    for(int i = 1;i<b;i++)
    {
        a*=step;
        a%=1000;
    }
    printf("%03d",a);
    return 0;
}