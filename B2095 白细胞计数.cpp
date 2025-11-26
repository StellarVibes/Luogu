#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;

int main() {
    int n = 0;
    double max_num = 0,sum = 0;
    cin>>n;
    vector<double> v;
    for(int i = 0;i<n;i++)
    {
        double num = 0;
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    for(int i = 1;i<v.size()-1;i++) sum+=v[i];
    double averge =1.0*sum/(v.size()-2);
    printf("%.2f",averge);
    for(int i = 1;i<v.size()-1;i++)
    {
        double tmp = abs(v[i]-averge);
        if(tmp>max_num) max_num = tmp;
    }
    printf(" %.2f",max_num);
    return 0;
}