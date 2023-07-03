#include <iostream>
#include <cmath>

class Figure {
public:
    virtual void print_info() const = 0;
};

class Triangle : public Figure {
public:
    Triangle(double a, double b, double c, double A, double B, double C) :
        a(a), b(b), c(c), A(A), B(B), C(C) {}

    double get_a() const { return a; }
    double get_b() const { return b; }
    double get_c() const { return c; }
    double get_A() const { return A; }
    double get_B() const { return B; }
    double get_C() const { return C; }

    void print_info() const override {
        std::cout << "Треугольник:" << std::endl
            << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl
            << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }

private:
    double a, b, c, A, B, C;
};

class RightTriangle : public Triangle {
public:
    RightTriangle(double a, double b) : Triangle(a, b, std::sqrt(a* a + b * b), std::atan(a / b), std::atan(b / a), 90) {}

    void print_info() const override {
        std::cout << "Прямоугольный треугольник:" << std::endl
            << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << std::endl
            << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << 90 << std::endl;
    }
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double a, double b) : Triangle(a, b, a, std::acos((b / 2) / a) * 2, std::acos((b / 2) / a) * 2, std::acos((a* a + b * b / 4 - a * b / 2) / (a * a))) {}

    void print_info() const override {
        std::cout << "Равнобедренный треугольник:" << std::endl
            << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << std::endl
            << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << std::endl;
    }
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double a) : Triangle(a, a, a, 60, 60, 60) {}

    void print_info() const override {
        std::cout << "Равносторонний треугольник:" << std::endl
            << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << std::endl
            << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << std::endl;
    }
};

class Quadrangle : public Figure {
public:
    Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D) :
        a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {}

    double get_a() const { return a; }
    double get_b() const { return b; }
    double get_c() const { return c; }
    double get_d() const { return d; }
    double get_A() const { return A; }
    double get_B() const { return B; }
    double get_C() const { return C; }
    double get_D() const { return D; }

    void print_info() const override {
        std::cout << "Четырёхугольник:" << std::endl
            << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl
            << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }

private:
    double a, b, c, d, A, B, C, D;
};

class Rectangle : public Quadrangle {
public:
    Rectangle(double a, double b) : Quadrangle(a, b, a, b, 90, 90, 90, 90) {}

    void print_info() const override {
        std::cout << "Прямоугольник:" << std::endl
            << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d() << std::endl
            << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D() << std::endl;
    }
};

class Square : public Rectangle {
public:
    Square(double a) : Rectangle(a, a) {}

    void print_info() const override {
        std::cout << "Квадрат:" << std::endl
            << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d() << std::endl
            << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D() << std::endl;
    }
};

class Parallelogram : public Quadrangle {
public:
    Parallelogram(double a, double b, double A, double B) : Quadrangle(a, b, a, b, A, B, 180 - A, 180 - B) {}

    void print_info() const override {
        std::cout << "Параллелограмм:" << std::endl
            << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d() << std::endl
            << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D() << std::endl;
    }
};

class Rhombus : public Parallelogram {
public:
    Rhombus(double a, double A) : Parallelogram(a, a, A, A) {}

    void print_info() const override {
        std::cout << "Ромб:" << std::endl
            << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d() << std::endl
            << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D() << std::endl;
    }
};

int main() {
    Triangle tr(10, 20, 15, 30, 60, 90);
    tr.print_info();

    RightTriangle rtr(3, 4);
    rtr.print_info();

    IsoscelesTriangle itr(5, 6);
    itr.print_info();

    EquilateralTriangle etr(7);
    etr.print_info();

    Quadrangle q(5, 6, 7, 8, 80, 90, 100, 90);
    q.print_info();

    Rectangle rect(10, 20);
    rect.print_info();

    Square sq(15);
    sq.print_info();

    Parallelogram p(5, 6, 45, 135);
    p.print_info();

    Rhombus rh(7, 60);
    rh.print_info();

    return 0;
}
