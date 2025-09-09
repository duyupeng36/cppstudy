#include <iostream>
#include <string>

int main()
{
    /*
    // Data output
    std::cout << "Data output: hello world!" << std::endl;

    int value{20};
    std::cout << "value = " << value << std::endl;

    // Error message
    std::cerr << "Error message: this is an error information" << std::endl;

    // Log message
    std::clog << "Log message: This is an info log" << std::endl;
    */

    /*
    std::string name;
    int age;

    std::cout << "Please input your name and age, use a space to separate" << std::endl;
    // std::cin >> name;
    // std::cin >> age;
    std::cin >> name >> age;

    std::cout << "Hello " << name << ", your are " << age << " years old" << std::endl;
    */

    // getline
    std::string name;
    int age;
    std::cout << "Please input your name and age, use a space to separate" << std::endl;
    // 读取一行数据
    std::getline(std::cin, name);
    std::cin >> age;
    std::cout << "Hello " << name << ", your are " << age << " years old" << std::endl;

    return 0;
}
