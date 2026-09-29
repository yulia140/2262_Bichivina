#include <iostream>

int main() {
    int x, y, z;
    std::cin >> x >> y >> z;

    bool result = (x == y) + (x == z) == true;
    std::cout << "result: " << result << std::endl;

    return 0;
}