#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    int n = 0,m = 0,count = 0;
    cin >> n;
    for(int i = 0;i<n;i++)
    {
        int num = 0;
        cin>>num;
        v.push_back(num);
    }
    cin>>m;
    for(auto&e:v)
    {
        if(e==m) count++;
    }
    cout<<count;
    return 0;
}