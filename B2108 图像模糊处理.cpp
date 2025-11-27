#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int original[100][100];
    int result[100][100];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> original[i][j];
            result[i][j] = original[i][j]; 
        }
    }
    for (int i = 1; i < n - 1; i++) 
    {
        for (int j = 1; j < m - 1; j++) 
        { 
            int sum = original[i][j] + original[i-1][j] + original[i+1][j] 
                    + original[i][j-1] + original[i][j+1];
            double avg = sum / 5.0;
            result[i][j] = round(avg); // round函数自动四舍五入
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << result[i][j];
            if (j != m - 1) cout << " "; 
        }
        cout << endl; 
    }
    return 0;
}