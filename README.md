# lanQiao
蓝桥杯 C++ 算法练习仓库

## 环境要求

- [VS Code](https://code.visualstudio.com/)
- VS Code 插件：[C/C++ Extension Pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack)
- 编译器：g++（支持 C++17）
- 调试器：gdb

## 使用方式

每个 `.cpp` 文件都可以**独立编译、运行和调试**，互不干扰。

### 编译并运行当前文件

打开任意 `.cpp` 文件后，按 `Ctrl+Shift+B`，选择：
- **C++: 编译当前文件** — 仅编译（生成可执行文件与 `.cpp` 文件同目录）
- **C++: 编译并运行当前文件** — 编译后立即在终端中运行

### 调试当前文件

1. 打开任意 `.cpp` 文件
2. 按 `F5`，配置选择 **C++: 调试当前文件 (gdb)**
3. 可在代码中设置断点（点击行号左侧），调试器会在断点处暂停

### 目录结构

```
lanQiao/
├── .vscode/
│   ├── tasks.json          # 编译任务配置
│   ├── launch.json         # 调试配置
│   ├── c_cpp_properties.json  # IntelliSense 配置
│   └── settings.json       # 编辑器设置
├── problems/
│   ├── template.cpp        # 代码模板
│   └── ...                 # 练习题文件
└── README.md
```

### 代码模板

新建练习题时，可参考 `problems/template.cpp`：

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 在这里写题解

    return 0;
}
```

> 提示：每道题新建一个 `.cpp` 文件即可，文件名建议使用题目编号或简短描述，例如 `a_plus_b.cpp`、`p1001.cpp` 等。
