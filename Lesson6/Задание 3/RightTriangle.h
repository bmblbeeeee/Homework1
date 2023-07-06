#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "Triangle.h"

class RightTriangle : public Triangle {
public:
    RightTriangle(double sideA, double sideB, double sideC, double angleA, double angleB);

    void print_info() const override;
};

#endif // RIGHTTRIANGLE_H

