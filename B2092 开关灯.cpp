#include<iostream>
using namespace std;

int main() {
    int n = 0;
    bool arr[5010]={false};
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        for(int j = i;j<=n;j+=i)
        {
            arr[j]=!arr[j];   
        }
    }
    for(int i = 1;i<=n;i++)
    {
        if(arr[i]==true) cout<<i<<" ";
    }
    return 0;
}