#include <iostream>
#include <cmath>

class Figure {
public:
    virtual void print_info() const = 0;
    virtual bool check() const = 0;
};

class Triangle : public Figure {
protected:
    double a, b, c;
    double A, B, C;

public:
    Triangle(double sideA, double sideB, double sideC, double angleA, double angleB, double angleC)
        : a(sideA), b(sideB), c(sideC), A(angleA), B(angleB), C(angleC) {}

    void print_info() const override {
        std::cout << "Треугольник:" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
        std::cout << (check() ? "Правильная" : "Неправильная") << std::endl;
    }

    bool check() const override {
        return std::abs(A + B + C - 180) < 1e-6;
    }
};

class RightTriangle : public Triangle {
public:
    RightTriangle(double sideA, double sideB, double sideC, double angleA, double angleB)
        : Triangle(sideA, sideB, sideC, angleA, angleB, 90) {}

    void print_info() const override {
        std::cout << "Прямоугольный треугольник:" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
        std::cout << (check() ? "Правильная" : "Неправильная") << std::endl;
    }
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double sideA, double sideB, double angleA, double angleB)
        : Triangle(sideA, sideB, sideA, angleA, angleB, angleA) {}

    void print_info() const override {
        std::cout << "Равнобедренный треугольник:" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
        std::cout << (check() ? "Правильная" : "Неправильная") << std::endl;
    }
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double side)
        : Triangle(side, side, side, 60, 60, 60) {}

    void print_info() const override {
        std::cout << "Равносторонний треугольник:" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
        std::cout << (check() ? "Правильная" : "Неправильная") << std::endl;
    }
};

class Quadrilateral : public Figure {
protected:
    double a, b, c, d;
    double A, B, C, D;

public:
    Quadrilateral(double sideA, double sideB, double sideC, double sideD, double angleA, double angleB, double angleC, double angleD)
        : a(sideA), b(sideB), c(sideC), d(sideD), A(angleA), B(angleB), C(angleC), D(angleD) {}

    void print_info() const override {
        std::cout << "Четырёхугольник:" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
        std::cout << (check() ? "Правильная" : "Неправильная") << std::endl;
    }

    bool check() const override {
        return std::abs(A + B + C + D - 360) < 1e-6;
    }
};

class Rectangle : public Quadrilateral {
public:
    Rectangle(double sideA, double sideB)
        : Quadrilateral(sideA, sideB, sideA, sideB, 90, 90, 90, 90) {}

    void print_info() const override {
        std::cout << "Прямоугольник:" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
        std::cout << (check() ? "Правильная" : "Неправильная") << std::endl;
    }
};

class Square : public Rectangle {
public:
    Square(double side)
        : Rectangle(side, side) {}

    void print_info() const override {
        std::cout << "Квадрат:" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
        std::cout << (check() ? "Правильная" : "Неправильная") << std::endl;
    }
};

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(double sideB, double sideC, double angleA, double angleB)
        : Quadrilateral(sideB, sideC, sideB, sideC, angleA, angleB, angleA, angleB) {}

    void print_info() const override {
        std::cout << "Параллелограмм:" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
        std::cout << (check() ? "Правильная" : "Неправильная") << std::endl;
    }
};

class Rhombus : public Parallelogram {
public:
    Rhombus(double side, double angleA, double angleB)
        : Parallelogram(side, side, angleA, angleB) {}

    void print_info() const override {
        std::cout << "Ромб:" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
        std::cout << (check() ? "Правильная" : "Неправильная") << std::endl;
    }
};

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
