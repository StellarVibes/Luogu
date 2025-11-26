#include<iostream>
using namespace std;

int main() {
    int n = 0,x = 0;
    int arr[10010]={0};
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    for(int i = 0;i<n;i++)
    {
        if(x==arr[i]) 
        {
            cout<< i;
            return 0;
        }
    }
    cout<< -1;
    return 0;
}