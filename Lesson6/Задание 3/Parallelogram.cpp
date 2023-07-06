#include "Parallelogram.h"
#include <iostream>

Parallelogram::Parallelogram(double sideB, double sideC, double angleA, double angleB)
    : Quadrilateral(sideB, sideC, sideB, sideC, angleA, angleB, angleA, angleB) {}

void Parallelogram::print_info() const {
    std::cout << "��������������:" << std::endl;
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "����: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}