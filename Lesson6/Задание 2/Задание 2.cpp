#include <iostream>
#include "Header.h"

int main() {
    setlocale(LC_ALL, "Russian");
    Counter counter;
    std::string wantInitialValue;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> wantInitialValue;

    if (wantInitialValue == "да") {
        int initialValue;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initialValue;
        counter = Counter(initialValue);
    }

    std::string command;
    while (true) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        if (command == "+") {
            counter.increase();
        }
        else if (command == "-") {
            counter.decrease();
        }
        else if (command == "=") {
            std::cout << counter.getValue() << std::endl;
        }
        else if (command == "x") {
            std::cout << "До свидания!" << std::endl;
            break;
        }
        else {
            std::cout << "Некорректная команда." << std::endl;
        }
    }

    return 0;
}