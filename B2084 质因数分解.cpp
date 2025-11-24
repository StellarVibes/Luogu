#include<iostream>
using namespace std;

int main() {
    int n = 0,ret = 0;
    cin>>n;
    for(int i = 1;i<n;i++)
    {
        if(n%i==0&&ret<i) ret = i;
    }
    cout<<ret;
    return 0;
}