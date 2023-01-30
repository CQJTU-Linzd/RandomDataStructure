#include<iostream>
using namespace std;
#include<ctime>
#include<vector>

// 生成1~maxrow行，1~maxcol列，数据范围在l~r的随机矩阵
vector<vector<int>> randomMatrix(int maxrow, int maxcol, int l, int r) {
    srand(time(0));
    int n = rand() % maxrow + 1;
    int m = rand() % maxcol + 1;
    vector<vector<int>>matrix(n, vector<int>(m));
    for (vector<int>& nums : matrix) {
        for (int& num : nums) {
            num = rand() % (r - l + 1) + l;
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
