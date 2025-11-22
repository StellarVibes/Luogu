#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n = 0;
    vector<int> v{0,1,1};
    cin >>n;
    for(int i =3;i<=30;i++)
    {
        v.push_back(v[i-1]+v[i-2]);
    }
    for(int i = 0;i<n;i++)
    {
        int num = 0;
        cin>>num;
        printf("%d\n",v[num]);
    }
    return 0;
}