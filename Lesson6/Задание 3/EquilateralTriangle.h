#ifndef EQUILATERALTRIANGLE_H
#define EQUILATERALTRIANGLE_H

#include "Triangle.h"

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double side);

    void print_info() const override;
};

#endif // EQUILATERALTRIANGLE_H

