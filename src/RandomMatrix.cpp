#include<iostream>
using namespace std;
#include<ctime>
#include<vector>

// 生成n行，m列，数据范围在l~r的随机矩阵
vector<vector<int>> randomMatrix(int n, int m, int l, int r) {
    srand(time(0));
    vector<vector<int>>matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = rand() % (r - l + 1) + l;
        }
    }
    return matrix;
}
int main() {
    vector<vector<int>>m = randomMatrix(20, 18, 0, 1000);
    for (vector<int> nums : m) {
        for (int num : nums) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
