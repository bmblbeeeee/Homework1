#include "Rhombus.h"
#include <iostream>

Rhombus::Rhombus(int side, int angle)
    : Quadrilateral(side, side, side, side, angle, 180 - angle, angle, 180 - angle) {}

void Rhombus::print_info() const {
    std::cout << "����:" << std::endl;
    std::cout << "�������: a=" << sideA << " b=" << sideB << " c=" << sideC << " d=" << sideD << std::endl;
    std::cout << "����: A=" << angleA << " B=" << angleB << " C=" << angleC << " D=" << angleD << std::endl;
    std::cout << std::endl;
}
