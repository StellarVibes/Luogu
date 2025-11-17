#include<iostream>
using namespace std;

int main() {
    int x = 0,y = 0,z = 0;
    cin >>x>>y>>z;
    if((x<60&&y>=60&&z>=60)||(x>=60&&y<60&&z>=60)||(x>=60&&y>=60&&z<60)) cout<<"1";
    else cout<<"0";
    return 0;
}