#include <iostream>
#include <windows.h> 

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
    // Эта строка настраивает кодировку консоли для вывода русского текста
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Shop::showPrice();
    OnlineStore::showPrice();

    return 0;
}