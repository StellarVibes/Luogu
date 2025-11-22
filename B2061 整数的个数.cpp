#include<iostream>
using namespace std;

int main() {
    int k = 0,sum_1 = 0,sum_5 = 0,sum_10=0;
    cin >>k;
    for(int i = 0;i<=k;i++)
    {
        int num = 0;
        cin>>num;
        if(num==1) sum_1++;
        else if(num==5) sum_5++;
        else if(num==10) sum_10++;
    }
    printf("%d\n%d\n%d\n",sum_1,sum_5,sum_10);
    return 0;
}