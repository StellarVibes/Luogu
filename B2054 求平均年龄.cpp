#include<iostream>
using namespace std;

int main() {
    int n = 0,sum = 0;
    cin >>n;
    for(int i = 0;i<n;i++)
    {
        int num = 0;
        cin>>num;
        sum+=num;
    }
    printf("%.2f",sum*1.0/n);
    return 0;
}