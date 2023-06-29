#include <iostream>
#include <string>

struct Address
{
    std::string city;
    std::string street;
    int houseNumber;
    int apartmentNumber;
    std::string postalCode;
};

void printAddress(const Address& address)
{
    std::cout << "Город: " << address.city << "\n";
    std::cout << "Улица: " << address.street << "\n";
    std::cout << "Номер дома: " << address.houseNumber << "\n";
    std::cout << "Номер квартиры: " << address.apartmentNumber << "\n";
    std::cout << "Индекс: " << address.postalCode << "\n";
    std::cout << "\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Address address1;
    address1.city = "Москва";
    address1.street = "Арбат";
    address1.houseNumber = 12;
    address1.apartmentNumber = 8;
    address1.postalCode = "123456";

    Address address2;
    address2.city = "Ижевск";
    address2.street = "Пушкина";
    address2.houseNumber = 59;
    address2.apartmentNumber = 143;
    address2.postalCode = "953769";

    printAddress(address1);
    printAddress(address2);

    return 0;
}