#include<iostream>
using namespace std;

int main() {
    int n = 0,m = 0,sum = 0;
    cin >> n >>m;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            int num = 0;
            cin>>num;
            if(i==0||i==n-1||j==0||j==m-1) sum+=num;
        }
    }
    cout<<sum;
    return 0;
}