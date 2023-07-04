#include <iostream>
#include <string>

int main()
{
    std::string имя;

    std::cout << "Введите имя: ";
    std::cin >> имя;

    std::cout << "Здравствуйте, " << имя << "!" << std::endl;

    return 0;
}
