#include<iostream>
#include<vector>
using namespace std;

// 辅助函数：输出坐标列表，自动处理空格（无末尾空格）
void printCoords(const vector<pair<int, int>>& coords) {
    for (int k = 0; k < coords.size(); k++) {
        if (k > 0) cout << " "; // 非第一个元素前加空格
        cout << "(" << coords[k].first << "," << coords[k].second << ")";
    }
    cout << endl;
}

int main() {
    int n, i, j;
    cin >> n >> i >> j;

    // 1. 同一行（行固定为i，列从1到n）
    vector<pair<int, int>> row;
    for (int col = 1; col <= n; col++) {
        row.emplace_back(i, col);
    }
    printCoords(row);

    // 2. 同一列（列固定为j，行从1到n）
    vector<pair<int, int>> col;
    for (int row = 1; row <= n; row++) {
        col.emplace_back(row, j);
    }
    printCoords(col);

    // 3. 左上到右下对角线（行-列 = i-j）
    vector<pair<int, int>> diag1;
    for (int x = 1; x <= n; x++) {
        int y = x - (i - j); // 推导：x-y = i-j → y = x - (i-j)
        if (y >= 1 && y <= n) { // 列必须在合法范围
            diag1.emplace_back(x, y);
        }
    }
    printCoords(diag1);

    // 4. 左下到右上对角线（行+列 = i+j，行从n到1遍历）
    vector<pair<int, int>> diag2;
    for (int x = n; x >= 1; x--) {
        int y = (i + j) - x; // 推导：x+y = i+j → y = i+j -x
        if (y >= 1 && y <= n) { // 列必须在合法范围
            diag2.emplace_back(x, y);
        }
    }
    printCoords(diag2);

    return 0;
}