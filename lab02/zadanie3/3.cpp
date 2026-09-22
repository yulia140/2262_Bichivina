#include <iostream>
int main() {
    int a=1, b=2;
    int c=a++ +b;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    return 0;
}