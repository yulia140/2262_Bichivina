#include <iostream>

int main() {
    double price = 199.99;

    // явно превращаем double в int, дробна€ часть отбрасываетс€
    int intPrice = static_cast<int>(price);

    std::cout << "intPrice = " << intPrice << std::endl;
    return 0;
}