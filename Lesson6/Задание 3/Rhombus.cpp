#include "Rhombus.h"
#include <iostream>

Rhombus::Rhombus(double side, double angleA, double angleB)
    : Parallelogram(side, side, angleA, angleB) {}

void Rhombus::print_info() const {
    std::cout << "Ромб:" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}
