#include "Square.h"
#include <iostream>

Square::Square(int side)
    : Quadrilateral(side, side, side, side, 90, 90, 90, 90) {}

void Square::print_info() const {
    std::cout << "Квадрат:" << std::endl;
    std::cout << "Стороны: a=" << sideA << " b=" << sideB << " c=" << sideC << " d=" << sideD << std::endl;
    std::cout << "Углы: A=" << angleA << " B=" << angleB << " C=" << angleC << " D=" << angleD << std::endl;
    std::cout << std::endl;
}
