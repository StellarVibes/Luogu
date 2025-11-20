#include<iostream>
using namespace std;

int main() {
    int n = 0,ret = 0;
    cin >>n;
    for(int i = 0;i<n;i++)
    {
        int num = 0;
        cin>>num;
        if(ret<num) ret = num;
    }
    printf("%d",ret);
    return 0;
}