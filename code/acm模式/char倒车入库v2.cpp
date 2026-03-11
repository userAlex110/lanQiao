
#include <iostream>
#include <string> // 引入字符串库

using namespace std;

// 1. 直接写一个普通的处理函数，参数类型改成 string
void replaceNum(string& s) {
    int numCount = 0;
    int oldSize = s.size();

    // 统计数字个数，用到了asc码
    for (int i = 0; i < oldSize; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            numCount++;
        }
    }

    // 扩容
    s.resize(oldSize + numCount * 5);
    int newSize = s.size();

    // 双指针倒车入库
    int oldIndex = oldSize - 1;
    int newIndex = newSize - 1;
    char numChar[] = {'n', 'u', 'm', 'b', 'e', 'r'};

    while (oldIndex >= 0) {
        if (s[oldIndex] >= '0' && s[oldIndex] <= '9') {
            for (int i = 5; i >= 0; i--) {
                s[newIndex] = numChar[i];
                newIndex--;
            }
            oldIndex--;
        } else {
            s[newIndex] = s[oldIndex];
            newIndex--;
            oldIndex--;
        }
    }
}

// 2. 蓝桥杯的大脑：main 函数
int main() {
    string s;
    
    // 蓝桥杯标准连续读取写法：只要控制台有输入，就一直执行
    while (cin >> s) { 
        
        // 调用咱们写好的算法进行原地修改
        replaceNum(s);
        
        // 蓝桥杯标准输出写法：打印修改后的结果，并换行 (endl)
        cout << s << endl; 
    }

    return 0;
}