﻿#include <iostream>
#include <string>

struct BankAccount
{
    int accountNumber;
    std::string ownerName;
    double balance;
};

void changeBalance(BankAccount& account, double newBalance)
{
    account.balance = newBalance;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    BankAccount account;

    std::cout << "Введите номер счёта: ";
    std::cin >> account.accountNumber;

    std::cout << "Введите имя владельца: ";
    std::cin.ignore(); // Очищаем буфер перед вводом строки
    std::getline(std::cin, account.ownerName);

    std::cout << "Введите баланс: ";
    std::cin >> account.balance;

    double newBalance;
    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;

    changeBalance(account, newBalance);

    std::cout << "Ваш счёт: " << account.ownerName << ", " << account.accountNumber << ", " << account.balance << "\n";

    return 0;
}
