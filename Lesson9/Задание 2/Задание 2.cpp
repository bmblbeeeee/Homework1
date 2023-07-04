#include <iostream>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

class Fraction
{
private:
    int numerator_;
    int denominator_;

public:
    Fraction(int numerator, int denominator)
    {
        numerator_ = numerator;
        denominator_ = denominator;
        reduce();
    }

    void reduce()
    {
        int divisor = gcd(numerator_, denominator_);
        numerator_ /= divisor;
        denominator_ /= divisor;
    }

    Fraction operator+(const Fraction& other) const
    {
        int newNumerator = numerator_ * other.denominator_ + other.numerator_ * denominator_;
        int newDenominator = denominator_ * other.denominator_;
        return Fraction(newNumerator, newDenominator);
    }

    Fraction operator-(const Fraction& other) const
    {
        int newNumerator = numerator_ * other.denominator_ - other.numerator_ * denominator_;
        int newDenominator = denominator_ * other.denominator_;
        return Fraction(newNumerator, newDenominator);
    }

    Fraction operator*(const Fraction& other) const
    {
        int newNumerator = numerator_ * other.numerator_;
        int newDenominator = denominator_ * other.denominator_;
        return Fraction(newNumerator, newDenominator);
    }

    Fraction operator/(const Fraction& other) const
    {
        int newNumerator = numerator_ * other.denominator_;
        int newDenominator = denominator_ * other.numerator_;
        return Fraction(newNumerator, newDenominator);
    }

    Fraction operator-() const
    {
        return Fraction(-numerator_, denominator_);
    }

    Fraction& operator++()  // Префиксный инкремент
    {
        numerator_ += denominator_;
        reduce();
        return *this;
    }

    Fraction operator++(int)  // Постфиксный инкремент
    {
        Fraction temp = *this;
        numerator_ += denominator_;
        reduce();
        return temp;
    }

    Fraction& operator--()  // Префиксный декремент
    {
        numerator_ -= denominator_;
        reduce();
        return *this;
    }

    Fraction operator--(int)  // Постфиксный декремент
    {
        Fraction temp = *this;
        numerator_ -= denominator_;
        reduce();
        return temp;
    }

    bool operator==(const Fraction& other) const
    {
        return (numerator_ == other.numerator_ && denominator_ == other.denominator_);
    }

    bool operator<(const Fraction& other) const
    {
        return (numerator_ * other.denominator_ < other.numerator_ * denominator_);
    }

    bool operator!=(const Fraction& other) const
    {
        return !(*this == other);
    }

    bool operator>(const Fraction& other) const
    {
        return (other < *this);
    }

    bool operator<=(const Fraction& other) const
    {
        return (*this < other) || (*this == other);
    }

    bool operator>=(const Fraction& other) const
    {
        return (*this > other) || (*this == other);
    }

    friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction);
};

std::ostream& operator<<(std::ostream& os, const Fraction& fraction)
{
    os << fraction.numerator_ << '/' << fraction.denominator_;
    return os;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int numerator1, denominator1, numerator2, denominator2;

    std::cout << "Введите числитель дроби 1: ";
    std::cin >> numerator1;

    std::cout << "Введите знаменатель дроби 1: ";
    std::cin >> denominator1;

    std::cout << "Введите числитель дроби 2: ";
    std::cin >> numerator2;

    std::cout << "Введите знаменатель дроби 2: ";
    std::cin >> denominator2;

    Fraction f1(numerator1, denominator1);
    Fraction f2(numerator2, denominator2);

    std::cout << f1 << " + " << f2 << " = " << f1 + f2 << '\n';
    std::cout << f1 << " - " << f2 << " = " << f1 - f2 << '\n';
    std::cout << f1 << " * " << f2 << " = " << f1 * f2 << '\n';
    std::cout << f1 << " / " << f2 << " = " << f1 / f2 << '\n';

    std::cout << "++" << f1 << " * " << f2 << " = " << ++f1 * f2 << '\n';
    std::cout << "Значение дроби 1 = " << f1 << '\n';

    std::cout << f1-- << " * " << f2 << " = " << f1-- * f2 << '\n';
    std::cout << "Значение дроби 1 = " << f1 << '\n';

    return 0;
}