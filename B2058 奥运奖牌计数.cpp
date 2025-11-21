#include<iostream>
using namespace std;

int main() {
    int n = 0,x = 0,y = 0,z = 0;
    int x_sum = 0,y_sum = 0,z_sum = 0;
    cin >>n;
    for(int i = 0;i<n;i++)
    {
        cin>>x>>y>>z;
        x_sum+=x;
        y_sum+=y;
        z_sum+=z;
    }
    printf("%d %d %d %d",x_sum,y_sum,z_sum,x_sum+y_sum+z_sum);
    return 0;
}