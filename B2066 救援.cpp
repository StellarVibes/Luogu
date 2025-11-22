#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n = 0;
    double sum = 0; 
    cin >>n;
    for(int i = 0;i<n;i++)
    {
        double x = 0,y =0,num =0;
        cin>>x>>y>>num;
        double distance = pow(x*x+y*y,0.5);
        double time = distance/50.0*2;
        time+=num*1.5;
        sum+=time;
    }
    if(sum!=int(sum)) sum++;
    printf("%d",int(sum));
    return 0;
}