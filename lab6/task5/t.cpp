#include <iostream>

// Первое пространство имен
namespace Shop {
    int price = 100;
    void showPrice() {
        std::cout << "Цена в магазине: " << price << std::endl;
    }
}

// Второе пространство имен
namespace OnlineStore {
    int price = 90;
    void showPrice() {
        std::cout << "Цена в интернет-магазине: " << price << std::endl;
    }
}

int main() {
    // Вызываем функции из разных пространств имен
    Shop::showPrice();
    OnlineStore::showPrice();

    return 0;
}