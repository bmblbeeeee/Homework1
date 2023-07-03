#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Quadrilateral.h"

class Rectangle : public Quadrilateral {
public:
    Rectangle(int width, int height);

    void print_info() const;
};

#endif // RECTANGLE_H