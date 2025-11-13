#include<iostream>
using namespace std;
int main()
{
    int x1 = 0,x2 = 0,x3 = 0,x4 = 0,x5 = 0,sum=0;
    cin>>x1>>x2 >>x3 >>x4 >>x5;
    sum+=x1%3;
    x2+=x1/3;x5+=x1/3;
    x1/=3;
    
    sum+=x2%3;
    x1+=x2/3;x3+=x2/3;
    x2/=3;
    
    sum+=x3%3;
    x2+=x3/3;x4+=x3/3;
    x3/=3;
    
    sum+=x4%3;
    x3+=x4/3;x5+=x4/3;
    x4/=3;
    
    sum+=x5%3;
    x4+=x5/3;x1+=x5/3;
    x5/=3;

    printf("%d %d %d %d %d\n%d",x1,x2,x3,x4,x5,sum);
    return 0;
}