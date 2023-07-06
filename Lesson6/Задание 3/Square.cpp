#include "Square.h"
#include <iostream>

Square::Square(double side)
    : Rectangle(side, side) {}

void Square::print_info() const {
    std::cout << "Квадрат:" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}