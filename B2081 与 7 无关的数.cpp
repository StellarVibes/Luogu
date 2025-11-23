#include<iostream>
using namespace std;

int main() {
    int n = 0,ret = 0;
    cin>>n;
    for(int i = 0;i<=n;i++)
    {
        if(!(i%7==0||(i%10==7)||(i>10&&i/10==7))) ret+=i*i;
    }
    cout<<ret;
    return 0;
}