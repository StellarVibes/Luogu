#include<iostream>
using namespace std;

int main() {
    int x = 0,sum = 0;
    char y = 0;
    cin >>x>>y;
    if(x<1000) sum+=8;
    if(x>1000) 
    {
        sum+=8;
        int num = x-1000;
        if(num%500==0) sum+=(num/500)*4;
        else sum+=(num/500+1)*4;
    }
    if(y=='y') sum+=5;
    cout<<sum;
    return 0;
}