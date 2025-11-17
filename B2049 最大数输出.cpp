#include<iostream>
#include <climits>
using namespace std;

int main() {
    long x = 0,y = 0,z = 0;
    cin >>x>>y>>z;
    long ret = LONG_MIN;
    if(ret<x) ret = x;
    if(ret<y) ret = y;
    if(ret<z) ret = z;
    cout<<ret;
    return 0;
}