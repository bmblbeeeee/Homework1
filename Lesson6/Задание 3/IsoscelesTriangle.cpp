#include "IsoscelesTriangle.h"
#include <iostream>

IsoscelesTriangle::IsoscelesTriangle(double sideA, double sideB, double angleA, double angleB)
    : Triangle(sideA, sideB, sideA, angleA, angleB, angleA) {}

void IsoscelesTriangle::print_info() const {
    std::cout << "�������������� �����������:" << std::endl;
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "����: A=" << A << " B=" << B << " C=" << C << std::endl;
}
