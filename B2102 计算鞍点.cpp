#include<iostream>
using namespace std;

int main() {
    int mat[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < 5; i++) 
    {
        int max_val = mat[i][0]; // 初始化为该行第一个元素
        int j_max = 0;          // 最大值的列索引
        for (int j = 1; j < 5; j++) 
        {
            if (mat[i][j] > max_val) 
            {
                max_val = mat[i][j];
                j_max = j;
            }
        }
        bool is_saddle = true;
        for (int k = 0; k < 5; k++) 
        {
            if (mat[k][j_max] < max_val) 
            { 
                is_saddle = false;
                break;
            }
        }
        if (is_saddle)
        {
            cout << i + 1 << " " << j_max + 1 << " " << max_val << endl;
            return 0; 
        }
    }
    cout << "not found" << endl;
    return 0;
}