#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include <memory>
#include <string>
#include <stdexcept>

std::shared_ptr<Shape> createShape(const std::string& type) {
    if (type == "circle") return std::make_shared<Circle>(5);
    if (type == "square") return std::make_shared<Square>(4);
    if (type == "rectangle") return std::make_shared<Rectangle>(4, 6);
    throw std::invalid_argument("Unknown shape type");
}
