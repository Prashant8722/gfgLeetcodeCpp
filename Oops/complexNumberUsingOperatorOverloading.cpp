#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double real = 0.0, double imaginary = 0.0)
        : real(real), imaginary(imaginary) {}

    Complex operator+(const Complex& other) const {
        double result_real = real + other.real;
        double result_imaginary = imaginary + other.imaginary;
        return Complex(result_real, result_imaginary);
    }

    void display() const {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    Complex c1(2.0, 3.0);
    Complex c2(4.0, 1.5);
    Complex sum = c1 + c2;

    c1.display();  // Output: 2 + 3i
    c2.display();  // Output: 4 + 1.5i
    sum.display(); // Output: 6 + 4.5i

    return 0;
}
