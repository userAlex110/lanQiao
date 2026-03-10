#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int i = 0, j = s.size() - 1; i < s.size() / 2; i++, j--) {
            swap(s[i], s[j]);
        }
    }
};

int main() {
    // 1.测试数据
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    // 2.实例化类并调用函数
    Solution sol;
    // void类型不能赋值，直接调用
    sol.reverseString(s);

    // 4. 打印修改后的 s，看看有没有反转成功
    cout << "反转后的字符串是: ";
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << " ";
    }
    cout << endl;

    return 0; // main 函数习惯性返回 0，表示程序正常结束
}