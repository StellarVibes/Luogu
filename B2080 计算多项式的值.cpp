#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double x = 0,ret = 0;
    int n = 0;
    cin>>x>>n;
    for(int i = 0;i<=n;i++)
    {
        ret+=pow(x,i);
    }
    printf("%.2f",ret);
    return 0;
}