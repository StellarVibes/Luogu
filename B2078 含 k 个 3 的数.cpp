#include<iostream>
using namespace std;

int main() {
    unsigned long long m = 0,k = 0,count = 0;
    cin>>m>>k;
    while(m)
    {
        if(m%10==3)
        {
            count++;
        }
        m/=10;
    }
    if(k==count) cout<<"YES";
    else cout<<"NO";
    return 0;
}