#include "EquilateralTriangle.h"
#include <iostream>

EquilateralTriangle::EquilateralTriangle(int a)
    : Triangle(a, a, a, 60, 60, 60) {}

void EquilateralTriangle::print_info() const {
    std::cout << "�������������� �����������:" << std::endl;
    std::cout << "�������: a=" << sideA << " b=" << sideB << " c=" << sideC << std::endl;
    std::cout << "����: A=" << angleA << " B=" << angleB << " C=" << angleC << std::endl;
    std::cout << std::endl;
}
