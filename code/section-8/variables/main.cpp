#include <iostream>


int main() {
    int number1;    // 未初始化
    int number2{};  // 初始化为 0
    int number3{9};  // 初始化为 9
    int number4{10};  // 初始化为 10
    int number5{number3 + number4};  // 表达式

    std::cout << number1 << std::endl;
    std::cout << number2 << std::endl;
    std::cout << number3 << std::endl;
    std::cout << number4 << std::endl;
    std::cout << number5 << std::endl;
    return 0;
}

