#include<iostream>
using namespace std;

int main() {
    unsigned long long n = 0;
    cin>>n;
    while(n!=1)
    {
        if(n%2==1)
        {
            cout<<n;
            n=n*3+1;
            cout<<"*3+1="<<n<<endl;
        }
        else{
            cout<<n;
            n = n/2;
            cout<<"/2="<<n<<endl;
        }
    }
    cout<<"End";
    return 0;
}