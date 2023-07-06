#include "Quadrilateral.h"
#include <iostream>

Quadrilateral::Quadrilateral(double sideA, double sideB, double sideC, double sideD, double angleA, double angleB, double angleC, double angleD)
    : a(sideA), b(sideB), c(sideC), d(sideD), A(angleA), B(angleB), C(angleC), D(angleD) {}

void Quadrilateral::print_info() const {
    std::cout << "Четырёхугольник:" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}
