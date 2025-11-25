#include<iostream>
using namespace std;

int main() {
    double arr[11]={0,28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
    double sum = 0;
    for(int i = 1;i<=10;i++)
    {
        double num = 0;
        cin>>num;
        sum+=arr[i]*num;
    }
    printf("%.1f",sum);
    return 0;
}