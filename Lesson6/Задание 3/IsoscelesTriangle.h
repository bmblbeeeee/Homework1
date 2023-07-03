#ifndef ISOSCELESTRIANGLE_H
#define ISOSCELESTRIANGLE_H

#include "Triangle.h"

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(int a, int b);

    void print_info() const override;
};

#endif // ISOSCELESTRIANGLE_H
