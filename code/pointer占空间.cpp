#include<iostream>
using namespace std;

int main() {
    int a = 10;

    int * p;
    p = &a; // &取地址符,指针指向a的地址

    cout << "*p的值不是占空间 :"<< *p << endl; // *解引用操作符，获取指针指向的值
    cout << "sizeof(p) : " << sizeof(p) << endl; // 指针变量占用的字节数，32位系统为4字节，64位系统为8字节
    cout << "sizeof(char *) : " << sizeof(char *) << endl; // 不同类型的指针占用的字节数相同
    cout << "sizeof(int *) : " << sizeof(int *) << endl;
    cout << "sizeof(double *) : " << sizeof(double *) << endl;
    cout << "sizeof(float *) : " << sizeof(float *) << endl;
    return 0;
}