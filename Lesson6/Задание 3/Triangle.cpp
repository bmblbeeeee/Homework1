#include "Triangle.h"
#include <iostream>

Triangle::Triangle(double sideA, double sideB, double sideC, double angleA, double angleB, double angleC)
    : a(sideA), b(sideB), c(sideC), A(angleA), B(angleB), C(angleC) {}

void Triangle::print_info() const {
    std::cout << "�����������:" << std::endl;
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "����: A=" << A << " B=" << B << " C=" << C << std::endl;
}
