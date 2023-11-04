#include <iostream>
#include <cmath>

template <typename T>
T square(T num) {
    return pow(num, 2);
}
//!petit programme utilisant cette Template

int main() {
    int a = 10;
    int b = 20;
    std::cout << square(a) << std::endl;
    std::cout << square(b) << std::endl;
    return 0;
}