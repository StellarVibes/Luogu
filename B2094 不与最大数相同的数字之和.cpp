#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;

int main() {
    long long n = 0,sum = 0;
    cin>>n;
    vector<int> v;
    for(int i = 0;i<n;i++)
    {
        long long num = 0;
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    for(auto&e:v)
    {
        if(e!=v[v.size()-1]) sum+=e;
    }
    cout<<sum;
    return 0;
}