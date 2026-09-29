#include <iostream>

int main() {
    int a = 10;
    double b = 3.5;

    // Тип result будет таким же, как у a + b, то есть double
    decltype(a + b) result = 13.5;

    // А здесь тип y будет int, потому что x — это int
    int x = 5;
    decltype(x) y = 100.5;   // дробная часть отбросится

    std::cout << "result = " << result << std::endl;  // 13.5
    std::cout << "y = " << y << std::endl;            // 100
    return 0;
}