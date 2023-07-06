#include "RightTriangle.h"
#include <iostream>

RightTriangle::RightTriangle(double sideA, double sideB, double sideC, double angleA, double angleB)
    : Triangle(sideA, sideB, sideC, angleA, angleB, 90) {}

void RightTriangle::print_info() const {
    std::cout << "������������� �����������:" << std::endl;
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "����: A=" << A << " B=" << B << " C=" << C << std::endl;
}
