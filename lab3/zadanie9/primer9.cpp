#include <iostream>

int main() {
    int x, y, z;
    std::cin >> x >> y >> z;

    bool result = x == y == z;
    std::cout << result << std::endl;

    return 0;
}