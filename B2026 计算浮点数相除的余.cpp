#include<iostream>
using namespace std;
int main()
{
    double a = 0,b = 0;
    cin>>a>>b;
    double k=int(a/b);//0 <= r < b 所以k是"a除以b的商的整数部分"
    double r = a-k*b;
    printf("%.4f",r);
    return 0;
}