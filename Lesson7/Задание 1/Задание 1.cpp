#include <iostream>

#define MODE 0

#ifdef MODE
#if MODE == 0
#define TRAINING_MODE
#elif MODE == 1
#define BATTLE_MODE
#else
#define UNKNOWN_MODE
#endif
#else
#error "MODE is not defined. Please define MODE."
#endif

#ifdef TRAINING_MODE
#define MODE_MESSAGE "Работаю в режиме тренировки"
#endif

#ifdef BATTLE_MODE
void add(int a, int b) {
    int sum = a + b;
    std::cout << "Результат сложения: " << sum << std::endl;
}
#define MODE_MESSAGE "Работаю в боевом режиме"
#endif

int main() {
    setlocale(LC_ALL, "Russian");
#ifdef MODE_MESSAGE
    std::cout << MODE_MESSAGE << std::endl;
#endif

#ifdef BATTLE_MODE
    int num1, num2;
    std::cout << "Введите число 1: ";
    std::cin >> num1;
    std::cout << "Введите число 2: ";
    std::cin >> num2;
    add(num1, num2);
#endif

#ifdef UNKNOWN_MODE
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif

    return 0;
}
