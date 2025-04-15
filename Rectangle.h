#pragma once
#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }

private:
    double width;
    double height;
};
