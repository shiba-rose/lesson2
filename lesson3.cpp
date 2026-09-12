#include <iostream>
#include <string>
#include <cmath>

int main() {
    std::cout << "Пожалуйста, введите значение с плавающей точкой: \n";
    int n;
    std::cin >> n;
    std::cout << "n == " << n << "\n"
        << "n+1 == " << n+1 << "\n"
        << "n три раза по n == " << n+n+n << "\n"
        << "n в квадрате == " << n*n << "\n"
        << "n половинв == " << n/2 << "\n"
        << "n квадратный корень == " << std::sqrt(n) << "\n";
    return 0;

}