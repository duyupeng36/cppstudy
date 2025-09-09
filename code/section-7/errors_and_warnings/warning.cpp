#include <iostream>

int main() {

    int value = 7 / 0; // 编译器知道除数为 0，因此在编译时会发出警告

    std::cout << "value: " << value << std::endl;
    return 0;
}