#include<iostream>
using namespace std;

int main() {
    int n = 0,m = 0,k = 0;
    int A[100][100]={0};
    int B[100][100]={0};
    cin>>n>>m>>k;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cin>>A[i][j];
        }
    }
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<k;j++)
        {
            cin>>B[i][j];
         }
    }
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<k;j++)
        {
            int sum = 0;
            for(int x = 0;x<m;x++)
            {
                sum+=A[i][x]*B[x][j];
            }
            cout<<sum<<" ";
         }
        cout<<endl;
    }
    return 0;
}