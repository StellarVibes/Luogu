#include<iostream>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    
    // 先取余数，去掉整数部分的影响
    a = a % b;
    
    int digit = 0;
    for (int i = 0; i < n; ++i) {
        a *= 10;          // 余数×10，准备计算下一位
        digit = a / b;    // 当前位的数字
        a = a % b;        // 保留新的余数
    }
    
    cout << digit << endl;
    return 0;
}