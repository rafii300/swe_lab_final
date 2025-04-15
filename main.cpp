#include "Shape.h"
#include <iostream>
#include <memory>

extern std::shared_ptr<Shape> createShape(const std::string& type);

int main() {
    auto shape = createShape("circle");
    std::cout << "Area: " << shape->area() << std::endl;
    return 0;
}
