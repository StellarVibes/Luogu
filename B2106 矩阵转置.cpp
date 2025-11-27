#include<iostream>
using namespace std;

int main() {
    int n = 0,m = 0;
    int arr[100][100]={0};
    cin>>n>>m;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int j = 0;j<m;j++)
    {
        for(int i = 0;i<n;i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}