#include <iostream>
#include <string>
#include <vector>
#include <cmath>

class Figure {
protected:
    int num_sides;

public:
    Figure(int sides) : num_sides(sides) {}

    virtual void print_info() {
        std::cout << "Фигура:\n";
        std::cout << (check() ? "Правильная" : "Неправильная") << std::endl;
        std::cout << "Количество сторон: " << num_sides << std::endl;
    }

    virtual bool check() {
        return num_sides == 0;
    }
};

class Triangle : public Figure {
private:
    std::vector<double> sides;
    std::vector<double> angles;

public:
    Triangle(double sideA, double sideB, double sideC, double angleA, double angleB, double angleC)
        : Figure(3), sides({ sideA, sideB, sideC }), angles({ angleA, angleB, angleC }) {}

    void print_info() override {
        std::cout << "Треугольник:\n";
        Figure::print_info();
        std::cout << "Стороны: ";
        for (int i = 0; i < sides.size(); i++) {
            std::cout << "a" << i + 1 << "=" << sides[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "Углы: ";
        for (int i = 0; i < angles.size(); i++) {
            std::cout << "A" << i + 1 << "=" << angles[i] << " ";
        }
        std::cout << std::endl;
    }

    bool check() override {
        if (!Figure::check()) {
            return false;
        }
        double sum = 0.0;
        for (double angle : angles) {
            sum += angle;
        }
        return sum == 180.0;
    }
};

class RightTriangle : public Triangle {
public:
    RightTriangle(double sideA, double sideB)
        : Triangle(sideA, sideB, sqrt(sideA* sideA + sideB * sideB), 90.0, asin(sideA / hypot(sideA, sideB)) * 180.0 / 3.14,
            asin(sideB / hypot(sideA, sideB)) * 180.0 / 3.14) {}

    void print_info() override {
        std::cout << "Прямоугольный треугольник:\n";
        Triangle::print_info();
    }
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double equalSide, double baseSide, double baseAngle)
        : Triangle(equalSide, equalSide, baseSide, baseAngle, (180.0 - baseAngle) / 2.0, (180.0 - baseAngle) / 2.0) {}

    void print_info() override {
        std::cout << "Равнобедренный треугольник:\n";
        Triangle::print_info();
    }
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double side)
        : Triangle(side, side, side, 60.0, 60.0, 60.0) {}

    void print_info() override {
        std::cout << "Равносторонний треугольник:\n";
        Triangle::print_info();
    }
};

class Quadrilateral : public Figure {
private:
    std::vector<double> sides;
    std::vector<double> angles;

public:
    Quadrilateral(double sideA, double sideB, double sideC, double sideD, double angleA, double angleB, double angleC, double angleD)
        : Figure(4), sides({ sideA, sideB, sideC, sideD }), angles({ angleA, angleB, angleC, angleD }) {}

    void print_info() override {
        std::cout << "Четырёхугольник:\n";
        Figure::print_info();
        std::cout << "Стороны: ";
        for (int i = 0; i < sides.size(); i++) {
            std::cout << "a" << i + 1 << "=" << sides[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "Углы: ";
        for (int i = 0; i < angles.size(); i++) {
            std::cout << "A" << i + 1 << "=" << angles[i] << " ";
        }
        std::cout << std::endl;
    }

    bool check() override {
        if (!Figure::check()) {
            return false;
        }
        double sum = 0.0;
        for (double angle : angles) {
            sum += angle;
        }
        return sum == 360.0;
    }
};

class Rectangle : public Quadrilateral {
public:
    Rectangle(double sideA, double sideB)
        : Quadrilateral(sideA, sideB, sideA, sideB, 90.0, 90.0, 90.0, 90.0) {}

    void print_info() override {
        std::cout << "Прямоугольник:\n";
        Quadrilateral::print_info();
    }
};

class Square : public Quadrilateral {
public:
    Square(double side)
        : Quadrilateral(side, side, side, side, 90.0, 90.0, 90.0, 90.0) {}

    void print_info() override {
        std::cout << "Квадрат:\n";
        Quadrilateral::print_info();
    }
};

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(double sideA, double sideB, double angleA, double angleB)
        : Quadrilateral(sideA, sideB, sideA, sideB, angleA, angleB, 180.0 - angleA, 180.0 - angleB) {}

    void print_info() override {
        std::cout << "Параллелограмм:\n";
        Quadrilateral::print_info();
    }
};

class Rhombus : public Quadrilateral {
public:
    Rhombus(double side, double angle)
        : Quadrilateral(side, side, side, side, angle, 180.0 - angle, angle, 180.0 - angle) {}

    void print_info() override {
        std::cout << "Ромб:\n";
        Quadrilateral::print_info();
    }
};

int main() {
    std::vector<Figure*> figures;
    figures.push_back(new Figure(0));
    figures.push_back(new Triangle(10, 20, 30, 50, 60, 70));
    figures.push_back(new RightTriangle(10, 20));
    figures.push_back(new IsoscelesTriangle(10, 20, 50));
    figures.push_back(new EquilateralTriangle(30));
    figures.push_back(new Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80));
    figures.push_back(new Rectangle(10, 20));
    figures.push_back(new Square(20));
    figures.push_back(new Parallelogram(20, 30, 30, 150));
    figures.push_back(new Rhombus(30, 30));

    for (Figure* figure : figures) {
        figure->print_info();
        std::cout << std::endl;
    }

    // Очистка памяти
    for (Figure* figure : figures) {
        delete figure;
    }

    return 0;
}

