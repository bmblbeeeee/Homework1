#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle {
public:
    Square(double side);

    void print_info() const override;
};

#endif // SQUARE_H

