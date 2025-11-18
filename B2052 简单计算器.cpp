#include<iostream>
using namespace std;

int main() {
    int x = 0,y= 0;
    char ch = 0;
    cin >>x>>y>>ch;
    if(ch=='/'&&y==0) cout<<"Divided by zero!";
    else if(!(ch=='+'||ch=='-'||ch=='*'||ch=='/')) cout<<"Invalid operator!";
    else{
        switch(ch)
        {
            case '+':cout<<x+y;break;
            case '-':cout<<x-y;break;
            case '*':cout<<x*y;break;
            case '/':cout<<x/y;break;
        }
    }
    return 0;
}