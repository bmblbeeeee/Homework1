#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "Quadrilateral.h"

class Rhombus : public Quadrilateral {
public:
    Rhombus(int side, int angle);

    void print_info() const;
};

#endif // RHOMBUS_H


