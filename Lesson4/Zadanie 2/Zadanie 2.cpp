#include <iostream>
#include <fstream>
#include <string>

class Address {
private:
    std::string city;
    std::string street;
    int houseNumber;
    int apartmentNumber;

public:
    Address() = default;

    Address(const std::string& city, const std::string& street, int houseNumber, int apartmentNumber)
        : city(city), street(street), houseNumber(houseNumber), apartmentNumber(apartmentNumber) {}

    std::string getOutputAddress() const {
        return city + ", " + street + ", " + std::to_string(houseNumber) + ", " + std::to_string(apartmentNumber);
    }

    std::string getCity() const {
        return city;
    }
};

void sort(Address* addresses, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (addresses[j].getCity() > addresses[j + 1].getCity()) {
                std::swap(addresses[j], addresses[j + 1]);
            }
        }
    }
}

int main() {
    std::ifstream inputFile("in.txt");
    std::ofstream outputFile("out.txt");

    if (inputFile.is_open() && outputFile.is_open()) {
        int numAddresses;
        inputFile >> numAddresses;

        Address* addresses = new Address[numAddresses];

        for (int i = 0; i < numAddresses; i++) {
            std::string city, street;
            int houseNumber, apartmentNumber;

            inputFile >> city >> street >> houseNumber >> apartmentNumber;
            addresses[i] = Address(city, street, houseNumber, apartmentNumber);
        }

        sort(addresses, numAddresses);

        outputFile << numAddresses << "\n";

        for (int i = 0; i < numAddresses; i++) {
            outputFile << addresses[i].getOutputAddress() << "\n";
        }

        delete[] addresses;

        inputFile.close();
        outputFile.close();

        std::cout << "Addresses have been sorted and written to 'out.txt'." << std::endl;
    }
    else {
        std::cout << "Failed to open the input or output file." << std::endl;
    }

    return 0;
}

