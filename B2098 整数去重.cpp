#include<iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n = 0,ret = 0;
    unordered_set<int> set;
    int arr[2010]={0};
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int num = 0;
        cin>>num;
        if(!set.count(num)) 
        {
            set.insert(num);
            cout<<num<<" ";
        }
    }
    return 0;
}