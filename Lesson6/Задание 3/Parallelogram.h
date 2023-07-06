#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(double sideB, double sideC, double angleA, double angleB);

    void print_info() const override;
};

#endif // PARALLELOGRAM_H

