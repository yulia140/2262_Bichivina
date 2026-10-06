#include <iostream>

int main() {
    int a = 23;
    int b = 027;
    int c = 0x17;
    int d = 0b10111;

    unsigned int e = 23u;
    long f = 23l;
    unsigned long g = 23ul;
    long long h = 23ll;
    unsigned long long i = 23ull;

    std::cout << "Different number systems:\n";
    std::cout << "decimal:      " << a << "\n";
    std::cout << "octal:        " << b << "\n";
    std::cout << "hexadecimal:  " << c << "\n";
    std::cout << "binary:       " << d << "\n";

    std::cout << "\nDifferent types:\n";
    std::cout << "unsigned int:       " << e << "\n";
    std::cout << "long:               " << f << "\n";
    std::cout << "unsigned long:      " << g << "\n";
    std::cout << "long long:          " << h << "\n";
    std::cout << "unsigned long long: " << i << "\n";

    return 0;
}