#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

void print_info(const Figure* figure) {
    figure->print_info();
}

int main() {
    Triangle triangle(10, 20, 30, 50, 60, 70);
    print_info(&triangle);

    RightTriangle rightTriangle(10, 20, 30, 50, 60);
    print_info(&rightTriangle);

    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    print_info(&isoscelesTriangle);

    EquilateralTriangle equilateralTriangle(30);
    print_info(&equilateralTriangle);

    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    print_info(&quadrilateral);

    Rectangle rectangle(10, 20);
    print_info(&rectangle);

    Square square(20);
    print_info(&square);

    Parallelogram parallelogram(20, 30, 30, 40);
    print_info(&parallelogram);

    Rhombus rhombus(30, 30, 40);
    print_info(&rhombus);

    return 0;
}

