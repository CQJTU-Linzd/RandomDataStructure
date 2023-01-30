#include<iostream>
using namespace std;
#include<ctime>
#include<string>

// 生成大小为size，只包含大小写字母的字符串
string randomUpperLowerCaseString(int size) {
    srand(time(0));
    string s = "";
    for (int i = 0; i < size; i++) {
        int flag = rand() % 2;
        char ch;
        if (flag) {
            ch = 'A' + (rand() % (26));
        } else {
            ch = 'a' + (rand() % (26));
        }
        s.push_back(ch);
    }
    return s;
}
int main() {
    int size = 150; // 生成字符串的大小
    string s = randomLowerCaseString(size);
    return 0;
}
