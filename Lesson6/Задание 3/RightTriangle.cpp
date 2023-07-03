#include "RightTriangle.h"
#include <iostream>

RightTriangle::RightTriangle(int sideA, int sideB) : sideA(sideA), sideB(sideB) {}

void RightTriangle::printInfo() const {
    std::cout << "������������� �����������:\n";
    std::cout << "�������: a=" << sideA << " b=" << sideB << " c=" << sideC << '\n';
    std::cout << "����: A=" << angleA << " B=" << angleB << " C=90\n";
}

