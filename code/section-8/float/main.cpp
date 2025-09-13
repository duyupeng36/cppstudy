#include <iostream>
#include <iomanip>


int main() {
    float f{1.12345678901234567890f};
    double d{1.12345678901234567890};
    long double ld{1.12345678901234567890L};

    std::cout << "sizeof(float): " << sizeof(float) << std::endl;
    std::cout << "sizeof(double): " << sizeof(double) << std::endl;
    std::cout << "sizeof(long double): " << sizeof(long double) << std::endl;

    std::cout << std::setprecision(20);  // 设置输出浮点数时输出 20位
    std::cout << "f = " << f << std::endl;  // 1.123456<8357467651367>
    std::cout << "d = " << d << std::endl;  // 1.12345678901234<56912>
    std::cout << "ld = " << ld << std::endl; // 1.1234567890123456789

    return 0;
}