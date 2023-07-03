#include <iostream>

#define MODE 1

#ifdef MODE
#if MODE == 0
#define TRAINING_MODE
#elif MODE == 1
#define BATTLE_MODE
#else
#error "Неизвестное значение MODE. Пожалуйста, установите корректное значение."
#endif
#else
#error "Необходимо определить MODE."
#endif

#ifdef TRAINING_MODE
#pragma message("Работаю в режиме тренировки")
#endif

#ifdef BATTLE_MODE
#include <iostream>

int add(int a, int b)
{
    return a + b;
}

#pragma message("Работаю в боевом режиме")

int main()
{
    setlocale(LC_ALL, "Russian");
    int num1, num2;
    std::cout << "Введите число 1: ";
    std::cin >> num1;
    std::cout << "Введите число 2: ";
    std::cin >> num2;

    int result = add(num1, num2);

    std::cout << "Результат сложения: " << result << std::endl;

    return 0;
}
#endif

#ifndef TRAINING_MODE
#ifndef BATTLE_MODE
#pragma message("Неизвестный режим. Завершение работы")
#endif
#endif
