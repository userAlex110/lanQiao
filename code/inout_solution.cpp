#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slowIndex = 0;
        for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++) {
            if (val != nums[fastIndex]) {
                nums[slowIndex] = nums[fastIndex];
                slowIndex++;
            }
        }
        return slowIndex;
    }
};



// 咱们自己写的 main 函数，用来测试
int main() {
    // 1. 准备测试数据（相当于代替了输入）
    vector<int> myNums = {3, 2, 2, 3}; 
    int valToRemove = 2;

    // 2. 实例化类并调用函数
    Solution sol;
    int newLength = sol.removeElement(myNums, valToRemove);

    // 3. 打印结果（相当于代替了输出）
    cout << "新的数组长度是: " << newLength << endl;
    cout << "修改后的数组内容是: ";
    for (int i = 0; i < newLength; i++) {
        cout << myNums[i] << " ";
    }
    cout << endl;

    return 0;
}