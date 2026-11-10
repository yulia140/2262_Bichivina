#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }
    
    std::cout << "Last: " << vec[n-1] << "\n";
    
    int idx = 0;
    for (int& x : vec) {
        x += idx;
        idx++;
    }
    
    int pos = 0, neg = 0;
    for (int x : vec) {
        if (x > 0) pos++;
        else if (x < 0) neg++;
    }
    
    std::cout << "Positive: " << pos << ", Negative: " << neg << "\n";
    return 0;
}