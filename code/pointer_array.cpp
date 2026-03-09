#include<iostream>
using namespace std;

// 利用指针访问数组元素
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int * p = arr; // 数组名arr表示数组的首地址
    cout << "访问数组元素：" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << *p << endl; // 通过指针访问数组元素，*p表示当前指针指向的值
        p++; // 指针向后移动一个元素，指向下一个数组元素
    }
    return 0;
}