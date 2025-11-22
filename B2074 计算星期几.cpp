#include<iostream>
#include<string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    long long res = 1;  // 用long long防止中间结果溢出
    int base = a % 7;   // 先取模，减少计算量
    for (int i = 0; i < b; i++) {
        res = (res * base) % 7;  // 每次乘完都取模
    }
    string week[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    cout << week[res] << endl;
    return 0;
}