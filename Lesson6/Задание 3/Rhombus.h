#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "Parallelogram.h"

class Rhombus : public Parallelogram {
public:
    Rhombus(double side, double angleA, double angleB);

    void print_info() const override;
};

#endif // RHOMBUS_H

