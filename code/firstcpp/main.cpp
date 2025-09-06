
#include <iostream>

using namespace std;

consteval int get_value() {
    return 2;
}

int main() {
    cout << "hello, world" << endl;
    cout << "get_value: " << get_value() << endl;
    return 0;
}
