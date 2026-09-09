#include <iostream>

bool getDoubled(int value, int& result) {
    result = value * 2;
    return true;
}

int main() {
    // 1. 输出姓名和学号（请替换为你自己的真实信息）
    std::cout << "姓名: 张三" << std::endl;
    std::cout << "学号: 20230001" << std::endl;

    // 2. 定义 bool 变量并输出
    bool isStudent = true;
    std::cout << "是否为学生: " << isStudent << std::endl;

    // 3. 用学号最后两位调用 getDoubled
    int value = 1;       // 学号最后两位，请替换为你自己的
    int result = 0;
    getDoubled(value, result);
    std::cout << value << " 的两倍是 " << result << std::endl;

    return 0;
}