#pragma once
#include "Shape.h"

class Square : public Shape {
public:
    explicit Square(double s) : side(s) {}
    double area() const override {
        return side * side;
    }

private:
    double side;
};
