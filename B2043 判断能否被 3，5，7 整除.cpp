#include<iostream>
using namespace std;

int main() {
    int n = 0,count = 0;
    cin >>n;
    if(n%3==0){ cout<<"3";count=1;}
    if(count) cout<<" ";
    if(n%5==0) {cout<<"5";count=1;}
    else count = 0;
    if(count) cout<<" ";
    if(n%7==0) {cout<<"7";count=1;}
    if(count==0) cout<<"n";
    return 0;
}