#include<iostream>
using namespace std;

int main() {
    int n = 0,m = 0,count = 0;
    cin>>n>>m;
    for(int i = 0;i<m;i++)
    {
        int num = 0;
        cin>>num;
        if(n-num<0) {count++;continue;}
        n-=num;
    }
    cout<<count;
    return 0;
}