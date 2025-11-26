#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;

int main() {
    int n = 0;
    int arr[1000010]={0};
    vector<int> v;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int num = 0;
        cin>>num;
        v.push_back(num);
        arr[num]++;
    }
    sort(v.begin(),v.end());
    int tmp = v[v.size()-1];
    for(int i = 0;i<=tmp;i++)
    {
        cout<< arr[i]<<endl;
    }
    return 0;
}