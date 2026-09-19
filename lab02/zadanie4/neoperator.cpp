#include <iostream>
void func(int a) {   // —кобки Ч часть объ€влени€ функции
    if (a > 0) {     // —кобки Ч часть инструкции if
        std::cout << a;
    }
}
int main() { func(5); return 0; }