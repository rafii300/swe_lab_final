#pragma once
#include "Shape.h"
#include <cmath>

class Circle : public Shape {
public:
    explicit Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }

private:
    double radius;
};
