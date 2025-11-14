#include<iostream>
#include <cmath>  // 包含数学库头文件，用于sqrt函数
using namespace std;
int main()
{
    int x1 = 0,y1 = 0,x2 = 0,y2 = 0;
    cin>>x1>>y1>>x2>>y2;
    double ret = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%.3f",ret);
    return 0;
}