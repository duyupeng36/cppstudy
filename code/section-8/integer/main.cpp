#include <iostream>

int main() {
    
    // Type: int
    int value1{10};
    int value2{-20};
    std::cout << "value1 : " << value1 << std::endl;
    std::cout << "value2 : " << value2 << std::endl;

    // Type: signed int
    signed int value3{10};
    signed int value4{-20};
    std::cout << "value3 : " << value3 << std::endl;
    std::cout << "value4 : " << value4 << std::endl;
    
    // Type: unsigned int
    unsigned int value5{10};
    // unsigned int value6{-20};  // 编译错误：窄化转换，转换后的目标值与原始值不相等，即是精度丢失
    unsigned int value6 = -20; // c 风格初始化。
    unsigned int value7(-20);  // 函数式初始化。容易与函数声明混淆
    std::cout << "value5 : " << value5 << std::endl;
    std::cout << "value6 : " << value6 << std::endl;
    std::cout << "value7 : " << value7 << std::endl;

    // sizeof(Type)
    std::cout << "sizeof(short int): " << sizeof(short int) << std::endl;
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(long int): " << sizeof(long int) << std::endl;
    std::cout << "sizeof(long long int): " << sizeof(long long int) << std::endl;

    return 0;
}
