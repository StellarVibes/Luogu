#include<iostream>
#include <climits>
using namespace std;

int main() {
    long x = 0,y = 0,z = 0;
    cin >>x>>y>>z;
    if((x+y<=z)||(x+z<=y)||y+z<=x) cout<<"0";
    else cout<<"1";
    return 0;
}