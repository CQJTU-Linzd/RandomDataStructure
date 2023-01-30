#include<iostream>
using namespace std;
#include<ctime>
#include<string>

// 生成大小为size，只包含小写字母的字符串
string randomLowerCaseString(int size) {
    srand(time(0));
    string s = "";
    for (int i = 0; i < size; i++) {
        char ch = 'a' + (rand() % (26));
        s.push_back(ch);
    }
    return s;
}
int main() {
    int size = 150; // 生成数组的大小
    string s = randomLowerCaseString(size);
    cout << s << endl;
    return 0;
}
