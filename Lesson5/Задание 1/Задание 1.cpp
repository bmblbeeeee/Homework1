#include <iostream>
#include "math_functions.h"

int main() {
    setlocale(LC_ALL, "Russian");
    double num1, num2;
    int operation;

    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> operation;

    double result;
    switch (operation) {
    case 1:
        result = addition(num1, num2);
        std::cout << "Результат сложения: " << result << std::endl;
        break;
    case 2:
        result = subtraction(num1, num2);
        std::cout << "Результат вычитания: " << result << std::endl;
        break;
    case 3:
        result = multiplication(num1, num2);
        std::cout << "Результат умножения: " << result << std::endl;
        break;
    case 4:
        result = division(num1, num2);
        std::cout << "Результат деления: " << result << std::endl;
        break;
    case 5:
        result = exponentiation(num1, num2);
        std::cout << "Результат возведения в степень: " << result << std::endl;
        break;
    default:
        std::cout << "Некорректный выбор операции." << std::endl;
        break;
    }

    return 0;
}
