#include<iostream>
using namespace std;
#include<ctime>
#include<string>

// 生成大小为size，包含任意可显示字符的随机字符串
string randomAnyCharacterString(int size) {
    srand(time(0));
    string s = "";
    for (int i = 0; i < size; i++) {
        char ch = ' ' + rand() % 95;
        s.push_back(ch);
    }
    return s;
};
int main() {
    int size = 15; // 生成字符串的大小
    string s = randomAnyCharacterString(size);
    cout << s << endl;
    return 0;
}
