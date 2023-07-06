#ifndef ISOSCELESTRIANGLE_H
#define ISOSCELESTRIANGLE_H

#include "Triangle.h"

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double sideA, double sideB, double angleA, double angleB);

    void print_info() const override;
};

#endif // ISOSCELESTRIANGLE_H

