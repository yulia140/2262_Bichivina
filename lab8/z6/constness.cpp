#include <iostream>

int main() {
    int arr[] = {10, 20, 30};
    
    for (const int& i : arr) {
        std::cout << i << " ";
        i=5;
    }
    std::cout << "\n";
    return 0;
}