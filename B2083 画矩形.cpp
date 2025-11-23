#include<iostream>
using namespace std;

int main() {
    int a, b, f;
    char c;
    cin >> a >> b >> c >> f;
    if (f == 0) // 绘制空心矩形
    { 
        // 处理特殊情况：只有1行 或 只有1列（空心等价于实心）
        if (a == 1) { 
            for (int j = 0; j < b; j++) cout << c;
        } else if (b == 1) {
            for (int i = 0; i < a; i++) cout << c << endl;
        } else {
            // 第一行：全字符
            for (int j = 0; j < b; j++) cout << c;
            cout << endl;
            // 中间行：首尾字符，中间空格
            for (int i = 1; i < a - 1; i++) {
                cout << c; // 首字符
                for (int j = 1; j < b - 1; j++) cout << " "; // 中间空格
                cout << c << endl; // 尾字符
            }
            // 最后一行：全字符
            for (int j = 0; j < b; j++) cout << c;
        }
    } 
    else // 绘制实心矩形
    { 
        // 外层循环a次（行数），内层循环b次（列数）
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                cout << c;
            }
            cout << endl; // 每行结束换行
        }
    }

    return 0;
}