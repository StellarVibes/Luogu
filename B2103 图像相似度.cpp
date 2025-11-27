#include<iostream>
using namespace std;

int main() {
    int m = 0,n = 0,count = 0;
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
            if(arr[i][j]==num) count++;
         }
    }
    printf("%.2f",100.0*count/(m*n));
    return 0;
}