#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double sideA, double sideB)
    : Quadrilateral(sideA, sideB, sideA, sideB, 90, 90, 90, 90) {}

void Rectangle::print_info() const {
    std::cout << "Прямоугольник:" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}
