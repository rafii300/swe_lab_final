#include "Shape.h"

class Square : public Shape {
    double side;
public:
    Square(double s) : side(s) {}
    double area() const override {
        return side * side;
    }
};
