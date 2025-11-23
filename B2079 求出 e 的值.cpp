#include<iostream>
using namespace std;

int main() {
    long long n = 0,num = 1;
    double ret = 1;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        num*=i;
        ret+=1.0/num;
        
    }
    printf("%.10f",ret);
    return 0;
}