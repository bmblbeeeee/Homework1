#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(int width, int height)
    : Quadrilateral(width, height, width, height, 90, 90, 90, 90) {}

void Rectangle::print_info() const {
    std::cout << "�������������:" << std::endl;
    std::cout << "�������: a=" << sideA << " b=" << sideB << " c=" << sideC << " d=" << sideD << std::endl;
    std::cout << "����: A=" << angleA << " B=" << angleB << " C=" << angleC << " D=" << angleD << std::endl;
    std::cout << std::endl;
}
