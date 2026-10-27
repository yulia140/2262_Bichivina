#include <iostream>
#include <string>

int main() {
    std::string s;
    for (int i=0; i<1000000; i++)
        s = s + 'a';
    std::cout << s.size() << "\n";
    return 0;
}