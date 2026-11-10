#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int x;
    while (std::cin >> x) nums.push_back(x);
    
    bool has_negative = false;
    for (int n : nums) {
        if (n < 0) {
            std::cout << "Negative: " << n << "\n";
            has_negative = true;
            break;
        }
    }
    if (!has_negative) {
        std::cout << "All non-negative\n";
    }
    return 0;
}