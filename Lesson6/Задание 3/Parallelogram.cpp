#include "parallelogram.h"
#include <iostream>

Parallelogram::Parallelogram(int a, int b, int angle) : sideA(a), sideB(b), sideC(a), sideD(b), angleA(angle), angleB(180 - angle), angleC(angle), angleD(180 - angle) {
}

void Parallelogram::print_info() {
    std::cout << "Parallelogram" << std::endl;
    std::cout << "Sides: " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << std::endl;
    std::cout << "Angles: " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << std::endl;
}

double Parallelogram::calculate_area() {
    // Implement your area calculation logic here
    // Return the calculated area
    return 0.0;
}


