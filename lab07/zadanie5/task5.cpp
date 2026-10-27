#include <iostream>
#include <utility> 

int main() {
    int a = 1, b = 2;
    
    a, b = b, a;
    std::cout << "After comma: " << a << " " << b << "\n"; 
    
    std::swap(a, b);
    std::cout << "After swap:  " << a << " " << b << "\n"; 
    
    return 0;
}