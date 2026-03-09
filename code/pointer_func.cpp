#include<iostream>
using namespace std;


void swap0(int a, int b) {
    int temp0 = a;
    a = b;
    b = temp0;
}

// 使用指针变量作为函数参数
void swap1(int * p1, int * p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    cout << "交换前：num1 = " << num1 << ", num2 = " << num2 << endl;
    swap0(num1, num2); // 传值调用，交换无效
    cout << "交换后（swap0）：num1 = " << num1 << ", num2 = " << num2 << endl;

    cout << endl;

    swap1(&num1, &num2); // 传地址调用，交换有效
    cout << "交换后（swap1）：num1 = " << num1 << ", num2 = " << num2 << endl;
    return 0;
}