#include <iostream>
#include <string>



int main(){
    std::string previous {" "};
    std::string current; 
    int count {0}; 
    while(std::cin >> current){
        if (current == previous){
            std::cout << "Повторяющееся слово: " << current << std::endl;
            count++;
        }
        previous = current;
    }
    std::cout << "Общее количество повторяющихся слов: " << count << std::endl;     
    return 0;
}