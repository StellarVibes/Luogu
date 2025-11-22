#include<iostream>
using namespace std;

int main() {
    int a = 0,b = 0,c = 0;
    cin>>a>>b>>c;
    for(int i = 2;;i++)
    {
        int x = a%i;
        int y = b%i;
        int z = c%i;
        if(x==y&&y==z)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}