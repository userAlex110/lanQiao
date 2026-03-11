
#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    // 使用 getline 读取包含空格的一整行，直到文件结束 （EOF）
    while (getline(cin, s)) {
        istringstream iss(s);
        string word;
        vector<string> words;

        // 提取单词
        while (iss >> word) {
            words.push_back(word);
        }

        //倒序拼接
        string result = "";
        if (!word.empty()) {
            for (int i = words.size() - 1; i >= 0; i--) {
                result += words[i];
                if (i != 0) {
                    result += " ";
                }
            }
        }
        cout << result << endl;
    }
}