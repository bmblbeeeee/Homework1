#include "IsoscelesTriangle.h"
#include <iostream>

IsoscelesTriangle::IsoscelesTriangle(int a, int b)
    : Triangle(a, b, a, 50, 60, 50) {}

void IsoscelesTriangle::print_info() const {
    std::cout << "Равнобедренный треугольник:" << std::endl;
    std::cout << "Стороны: a=" << sideA << " b=" << sideB << " c=" << sideC << std::endl;
    std::cout << "Углы: A=" << angleA << " B=" << angleB << " C=" << angleC << std::endl;
    std::cout << std::endl;
}
