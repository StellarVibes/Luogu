#include<iostream>
using namespace std;

int main() {
    int n = 0,ret = 0;
    int arr[2010]={0};
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int num = 0;
        cin>>num;
        arr[num]++;
        if(ret<arr[num]) ret = arr[num];
    }
    cout<<ret;
    return 0;
}