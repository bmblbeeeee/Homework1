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
    Address(const std::string& city, const std::string& street, int houseNumber, int apartmentNumber)
        : city(city), street(street), houseNumber(houseNumber), apartmentNumber(apartmentNumber) {}

    std::string getOutputAddress() const {
        return city + ", " + street + ", " + std::to_string(houseNumber) + ", " + std::to_string(apartmentNumber);
    }
};

int main() {
    std::ifstream inputFile("in.txt");
    std::ofstream outputFile("out.txt");

    if (inputFile.is_open() && outputFile.is_open()) {
        int numAddresses;
        inputFile >> numAddresses;

        Address** addresses = new Address * [numAddresses];

        for (int i = 0; i < numAddresses; i++) {
            std::string city, street;
            int houseNumber, apartmentNumber;

            inputFile >> city >> street >> houseNumber >> apartmentNumber;
            addresses[i] = new Address(city, street, houseNumber, apartmentNumber);
        }

        outputFile << numAddresses << "\n";

        for (int i = numAddresses - 1; i >= 0; i--) {
            outputFile << addresses[i]->getOutputAddress() << "\n";
        }

        for (int i = 0; i < numAddresses; i++) {
            delete addresses[i];
        }
        delete[] addresses;

        inputFile.close();
        outputFile.close();

        std::cout << "Addresses have been processed and written to 'out.txt'." << std::endl;
    }
    else {
        std::cout << "Failed to open the input or output file." << std::endl;
    }

    return 0;
}

