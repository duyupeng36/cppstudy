#include <iostream>

int main() {

    int number1 = 15; // 十进制
    int number2 = 017; // 八进制
    int number3 = 0x0F; // 十六进制
    int number4 = 0b00001111; // 二进制 C++14 起支持
    std::cout << "number1: " << number1 << std::endl;
    std::cout << "number2: " << number2 << std::endl;
    std::cout << "number3: " << number3 << std::endl;
    std::cout << "number4: " << number4 << std::endl;
    return 0;
}
