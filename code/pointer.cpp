#include<iostream>
using namespace std;

int main() {
    // 1. 指针的定义
    int a = 10;

    // 指针定于语法：数据类型 * 变量名
    int *p;

    // 指针变量赋值
    p = &a; // &取地址符
    cout << "a的地址是：" << &a << endl;
    cout << "p的值是：" << p << endl; // p存储的是a的地址

    // 2. 指针的使用
    // 通过*操作符访问指针指向的值
    cout << "p指向的值是：" << *p << endl; // *解引用操作符，获取指针指向的值
    return 0;
}