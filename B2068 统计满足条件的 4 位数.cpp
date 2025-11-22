#include<iostream>
using namespace std;

int main() {
    int n = 0,count = 0;;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int num = 0;
        cin>>num;
        int sum = num%10;
        num/=10;
        for(int i = 0;i<3;i++)
        {
            sum-=num%10;
            num/=10;
        }
        if(sum>0) count++;
    }
    cout<<count;
    return 0;
}