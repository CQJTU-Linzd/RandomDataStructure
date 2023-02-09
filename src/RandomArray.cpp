#include<iostream>
using namespace std;
#include<ctime>
#include<vector>

// 生成大小为size，数据范围在l~r的随机数组
vector<int> randomArray(int size, int l, int r) {
    srand(time(0));
    vector<int>nums;
    for (int i = 0; i < size; i++) {
        nums.push_back(rand() % (r - l + 1) + l);
    }
    return nums;
}
int main() {
    int size = 150; // 生成数组的大小
    vector<int>nums = randomArray(size, 0, 1000);
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}
