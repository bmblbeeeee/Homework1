#include "Triangle.h"
#include <iostream>
#include <cmath>

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
    : sideA(a), sideB(b), sideC(c), angleA(A), angleB(B), angleC(C) {}

int Triangle::getSideA() const { return sideA; }
int Triangle::getSideB() const { return sideB; }
int Triangle::getSideC() const { return sideC; }

int Triangle::getAngleA() const { return angleA; }
int Triangle::getAngleB() const { return angleB; }
int Triangle::getAngleC() const { return angleC; }

void Triangle::print_info() const {
    std::cout << "Треугольник:" << std::endl;
    std::cout << "Стороны: a=" << sideA << " b=" << sideB << " c=" << sideC << std::endl;
    std::cout << "Углы: A=" << angleA << " B=" << angleB << " C=" << angleC << std::endl;
    std::cout << std::endl;
}


