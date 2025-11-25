#include<iostream>
using namespace std;

int main() {
    int n = 0,sum = 0;
    int arr[1000]={0};
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int num = 0;
        cin>>num;
        arr[i]=num;   
    }
    for(int i = 0;i<n;i++)
    {
        int num = 0;
        cin>>num;
        arr[i]*=num;   
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}