#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"

class Triangle : public Figure {
protected:
    double a, b, c;
    double A, B, C;

public:
    Triangle(double sideA, double sideB, double sideC, double angleA, double angleB, double angleC);

    void print_info() const override;
};

#endif // TRIANGLE_H

