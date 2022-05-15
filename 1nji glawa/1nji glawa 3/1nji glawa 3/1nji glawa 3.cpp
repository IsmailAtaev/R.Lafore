#include <iostream>

int main() {
    const int  a = 10;
    int b, x;
    b = a;
    x = a + b;
    std::cout << x << "\n";
    std::cout << --x;
    return 0;
}