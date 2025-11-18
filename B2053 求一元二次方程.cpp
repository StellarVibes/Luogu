#include<iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 0,b= 0,c = 0;
    cin >>a>>b>>c;
    double dlta = b*b-4*a*c;
    if(dlta<0) 
    {
        cout<<"No answer!";
        return 0;
    }
    double x1 = (-1*b+pow(dlta,0.5))*1.0/(2*a);
    double x2 = (-1*b-pow(dlta,0.5))*1.0/(2*a);
    if(x1==x2) printf("x1=x2=%.5f",x1);
    else if(x1<x2)
        printf("x1=%.5f;x2=%.5f",x1,x2);
    else
        printf("x1=%.5f;x2=%.5f",x2,x1);
    return 0;
}