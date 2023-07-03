#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(int a, int b, int angle);
    void print_info();
    double calculate_area();
private:
    int sideA;
    int sideB;
    int sideC;
    int sideD;
    int angleA;
    int angleB;
    int angleC;
    int angleD;
};

#endif  // PARALLELOGRAM_H




