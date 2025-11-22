#include<iostream>
using namespace std;

int main() {
    int n;
    double sum = 0;
    cin>>n;
    int p = 1,q = 2;
    for(int i = 1;i<=n;i++)
    {
        sum+=1.0*q/p;
        int tmp = q;
        q = q+p;
        p = tmp;
    }
    printf("%.4f",sum);
    return 0;
}