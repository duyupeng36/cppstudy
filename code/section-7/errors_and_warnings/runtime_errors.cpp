#include <iostream>

using namespace std;

int divied(int a, int b) {
    // 没有检测除数 b 是否为 0
    return a / b;
}

int main() {

    // RuntimeError: 除数为零
    int result = divied(2, 0);
    cout << "result: "<< result << endl;
    return 0;
}

