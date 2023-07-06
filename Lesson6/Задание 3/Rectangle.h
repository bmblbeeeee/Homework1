#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Quadrilateral.h"

class Rectangle : public Quadrilateral {
public:
    Rectangle(double sideA, double sideB);

    void print_info() const override;
};

#endif // RECTANGLE_H

