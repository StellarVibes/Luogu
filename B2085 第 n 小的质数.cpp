#include<iostream>
#include<cmath>  // 用于sqrt函数
using namespace std;

int main() {
    int n = 0, count = 0;
    cin >> n;
    if (n == 1) // 特殊处理：第1个质数是2
    {
        cout << 2 << endl;
        return 0;
    }
    count = 1;  // 已统计质数2，后续只需找奇数
    for (int i = 3;; i += 2) // 外层循环：从3开始，只检查奇数（步长2）
    {
        bool is_prime = true;  // 标记是否为质数，初始为真
        int sqrt_i = sqrt(i);  // 提前计算√i，避免重复计算
        for (int j = 3; j <= sqrt_i; j += 2) // 内层循环：从3开始，只检查奇数（步长2），到√i为止
        {
            if (i % j == 0) // 能被整除，不是质数
            {  
                is_prime = false;
                break;
            }
        }
        if (is_prime) 
        {
            count++;  // 找到一个质数，计数+1
            if (count == n) // 找到第n个质数
            {  
                cout << i << endl;
                return 0;
            }
        }
    }
    return 0;
}