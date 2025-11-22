#include<iostream>
using namespace std;

int main() {
    int n = 0;
    double ret = 0;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        int flage = 1;
        if(i%2==0) flage = -1;
        ret+=flage*(1.0/i);
    }
    printf("%.4f",ret);
    return 0;
}