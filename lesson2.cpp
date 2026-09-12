#include <iostream>
#include <string>

int main(){
    std::cout << "Введите ваше имя: \n";
    std::string fist_name1;
    std::string second_name1;
    double age1;
    std::cin >> fist_name1 >> second_name1 >> age1;
    std::cout << "Привет, " << fist_name1 << " " << second_name1  << "! Тебе " << age1*12 << " месяцев.\n";
    return 0;

}