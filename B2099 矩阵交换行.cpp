#include<iostream>
#include <vector>
using namespace std;

int main() {
    int index[5] = {0,1,2,3,4};
    vector<vector<int>> vv;
    for(int i = 0;i<5;i++)
    {
        vector<int> v;
        for(int j = 0;j<5;j++)
        {
            int num = 0;
            cin>>num;
            v.push_back(num);
        }
        vv.push_back(v);
    }
    int x = 0,y = 0;
    cin>>x>>y;
    int tmp = index[x-1];
    index[x-1]= index[y-1];
    index[y-1]= tmp;
    for(int i = 0;i<5;i++)
    {
        for(auto&e:vv[index[i]])
        {
            cout<<e<<" ";
        }
        cout<<endl;
    }
    return 0;
}