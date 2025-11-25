#include<iostream>
using namespace std;

int main() {
    int n = 0,num1 = 0,num2 = 0,num3 = 0,num4 = 0;
    int arr[100]={0};
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int num = 0;
        cin>>num;
        if(num<=18) num1++;
        else if(num<=35) num2++;
        else if(num<=60) num3++;
        else num4++;
    }
    int sum = num1 + num2 + num3 +num4 ;
    printf("%.2f%\n%.2f%\n%.2f%\n%.2f%\n",1.0*num1/sum*100,1.0*num2/sum*100,1.0*num3/sum*100,1.0*num4/sum*100);
    return 0;
}