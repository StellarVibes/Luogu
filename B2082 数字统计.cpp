#include<iostream>
using namespace std;

int main() {
    int left = 0,right = 0,count = 0;
    cin>>left>>right;
    for(int i = left;i<=right;i++)
    {
        int tmp = i;
        while(tmp)
        {
            if(tmp%10==2) count++;
            tmp/=10;
        }
    }
    cout<<count;
    return 0;
}