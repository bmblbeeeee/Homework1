#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
protected:
    int sideA, sideB, sideC;
    int angleA, angleB, angleC;

public:
    Triangle(int a, int b, int c, int A, int B, int C);

    int getSideA() const;
    int getSideB() const;
    int getSideC() const;

    int getAngleA() const;
    int getAngleB() const;
    int getAngleC() const;

    virtual void print_info() const;
};

#endif // TRIANGLE_H



