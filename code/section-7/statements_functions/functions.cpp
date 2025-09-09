#include <iostream>

// using 指示语句
using namespace std;


// 定义函数
int calculate_volume(int length, int width, int height) {
    return length * width * height;
}

int main() {

    int length{20};
    int width{10};
    int height{3};
    int volume;
    
    // 调用函数
    volume = calculate_volume(length, width, height);
    cout << "hello, world" << endl;

    return 0;
}
