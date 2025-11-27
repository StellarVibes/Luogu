#include<iostream>
using namespace std;

int main() {
    int m = 0,n = 0;
    int arr[100][100]={0};
    cin>>m>>n;
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            int num = 0;
            cin>>num;
            arr[i][j]+=num;
         }
    }
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
         }
        cout<<endl;
    }
    return 0;
}