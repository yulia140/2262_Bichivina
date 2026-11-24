#include <iostream>

// & как ссылка в параметре функции
void inc(int &r) { r++; }

int main() {
    int a = 10, b = 3;

    // * Ч описатель указател€
    int *p = &a;          // & Ч вз€тие адреса

    // * Ч разыменование
    std::cout << "*p = " << *p << "\n";

    // * Ч умножение
    std::cout << "a * b = " << a * b << "\n";

    // & Ч побитовое »
    std::cout << "a & b = " << (a & b) << "\n";

    // & Ч ссылка
    int &ref = a;
    inc(ref);
    std::cout << "a after inc = " << a << "\n";

    return 0;
}
