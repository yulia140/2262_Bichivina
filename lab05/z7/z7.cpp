#include <iostream>

int main() {
    double s = 0.0 / 0.0;
    if (s != s)
        std::cout << "yes";
    return 0;
}