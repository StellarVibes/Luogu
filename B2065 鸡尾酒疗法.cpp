#include<iostream>
using namespace std;

int main() {
    int n = 0; 
    cin >>n;
    int x = 0,y =0;
    cin>>x>>y;
    double rate = y*1.0/x;
    for(int i = 1;i<n;i++)
    {
        x = 0;
        y =0;
        cin>>x>>y;
        double r = y*1.0/x;
        if(r-rate>0.05) cout<<"better"<<endl;
        else if(rate-r>0.05) cout<<"worse"<<endl;
        else cout<<"same"<<endl;
    }
    return 0;
}