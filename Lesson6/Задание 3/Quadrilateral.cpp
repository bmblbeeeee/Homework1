#include "Quadrilateral.h"
#include <iostream>

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
    : sideA(a), sideB(b), sideC(c), sideD(d), angleA(A), angleB(B), angleC(C), angleD(D) {}

int Quadrilateral::getSideA() const { return sideA; }
int Quadrilateral::getSideB() const { return sideB; }
int Quadrilateral::getSideC() const { return sideC; }
int Quadrilateral::getSideD() const { return sideD; }

int Quadrilateral::getAngleA() const { return angleA; }
int Quadrilateral::getAngleB() const { return angleB; }
int Quadrilateral::getAngleC() const { return angleC; }
int Quadrilateral::getAngleD() const { return angleD; }

void Quadrilateral::print_info() const {
    std::cout << "Четырехугольник:" << std::endl;
    std::cout << "Стороны: a=" << sideA << " b=" << sideB << " c=" << sideC << " d=" << sideD << std::endl;
    std::cout << "Углы: A=" << angleA << " B=" << angleB << " C=" << angleC << " D=" << angleD << std::endl;
    std::cout << std::endl;
}
