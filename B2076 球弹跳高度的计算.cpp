#include<iostream>
using namespace std;

int main() {
    double h = 0;
    cin>>h;
    double sum = h;
    for(int i = 1;i<10;i++)
    {
        h/=2.0;
        sum+=h*2;
    }
    double tmp = h/2.0;
    printf("%g\n%g",sum,tmp);
    return 0;
}