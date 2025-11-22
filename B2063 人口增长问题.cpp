#include<iostream>
using namespace std;

int main() {
    double x = 0,n = 0;
    cin >>x>>n;
    for(int i = 0;i<n;i++)
    {
        x*=1.001;
    }
    printf("%.4f",x);
    return 0;
}