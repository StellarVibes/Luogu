#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int count = 0; // 统计有效解的数量
    for (int y = 0; y <= c / b; ++y) // 枚举y的所有可能：y≥0 且 b*y ≤ c → y ≤ c/b
    {
        int remainder = c - b * y; // 剩余值需要由a*x承担
        if (remainder >= 0 && remainder % a == 0) // 关键判断：1.剩余值≥0  2.剩余值能被a整除（保证x是整数）
        {
            count++; // 满足条件，解数+1
        }
    }
    cout << count << endl;
    return 0;
}