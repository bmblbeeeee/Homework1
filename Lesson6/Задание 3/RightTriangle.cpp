#include "RightTriangle.h"
#include <iostream>

RightTriangle::RightTriangle(int sideA, int sideB) : sideA(sideA), sideB(sideB) {}

void RightTriangle::printInfo() const {
    std::cout << "Прямоугольный треугольник:\n";
    std::cout << "Стороны: a=" << sideA << " b=" << sideB << " c=" << sideC << '\n';
    std::cout << "Углы: A=" << angleA << " B=" << angleB << " C=90\n";
}

