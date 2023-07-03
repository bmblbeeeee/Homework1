#include <iostream>
using namespace std;

class Figure {
protected:
    int sides_count;
    string name;

public:
    Figure(int sides = 0) : sides_count(sides), name("Фигура") {}

    int get_sides_count() {
        return sides_count;
    }

    string get_name() {
        return name;
    }
};

class Triangle : public Figure {
public:
    Triangle() : Figure(3) {
        name = "Треугольник";
    }
};

class Quadrangle : public Figure {
public:
    Quadrangle() : Figure(4) {
        name = "Четырёхугольник";
    }
};

int main() {
    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;

    cout << "Количество сторон:" << endl;
    cout << figure.get_name() << ": " << figure.get_sides_count() << endl;
    cout << triangle.get_name() << ": " << triangle.get_sides_count() << endl;
    cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << endl;

    return 0;
}
