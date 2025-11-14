#include<iostream>
using namespace std;
int main()
{
    int r = 0;
    cin>>r;
    string s=to_string(r);
    for(int i =s.size()-1;i>=0;i--) cout<<s[i];
    for(int i = 3-s.size()-1;i>=0;i--) cout<<"0";
    return 0;
}