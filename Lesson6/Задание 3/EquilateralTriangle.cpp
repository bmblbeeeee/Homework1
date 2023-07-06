#include "EquilateralTriangle.h"
#include <iostream>

EquilateralTriangle::EquilateralTriangle(double side)
    : Triangle(side, side, side, 60, 60, 60) {}

void EquilateralTriangle::print_info() const {
    std::cout << "�������������� �����������:" << std::endl;
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "����: A=" << A << " B=" << B << " C=" << C << std::endl;
}
