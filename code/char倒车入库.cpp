
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void replaceNum(vector<char>& s) {
        // 1.第一步查车位，看有多少数字
        int count = 0;
        int oldSize = s.size();

        for (int i = 0; i < oldSize; i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                count++;
            }
        }

        // 扩容
        s.resize(oldSize + count*5);
        int newSize = s.size();

        // 2.双指针倒车入库
        int oldIndex = oldSize - 1;
        int newIndex = newSize -1;
        
        // 初始化数组，用{大括号}
        char numChar[] = {'n', 'u', 'm', 'b', 'e', 'r'};

        while (oldIndex >= 0) {
            if (s[oldIndex] >= '0' && s[oldIndex] <= '9') {
                for (int i = 5; i >= 0; i--) {
                    s[newIndex] = numChar[i];
                    newIndex--;
                }
            oldIndex--;
            } 
            else {
                s[newIndex] = s[oldIndex];
                newIndex--;
                oldIndex--;
            }
        }
    }
};


int main() {
    // 1. 准备一段包含数字的测试数据： "a1b2c"
    vector<char> testStr = {'a', '1', 'b', '2', 'c'};
    
    cout << "替换前: ";
    for(int i = 0; i < testStr.size(); i++) cout << testStr[i];
    cout << endl;

    // 2. 调用你写的函数
    Solution sol;
    sol.replaceNum(testStr);

    // 3. 打印结果
    cout << "替换后: ";
    for(int i = 0; i < testStr.size(); i++) cout << testStr[i];
    cout << endl;

    return 0;
}