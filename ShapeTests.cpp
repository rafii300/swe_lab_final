#include "gtest/gtest.h"
#include "Shape.h"
#include <memory>

extern std::shared_ptr<Shape> createShape(const std::string& type);

TEST(ShapeTest, CircleArea) {
    auto circle = createShape("circle");
    EXPECT_NEAR(circle->area(), 78.5398, 0.01);
}

TEST(ShapeTest, SquareArea) {
    auto square = createShape("square");
    EXPECT_DOUBLE_EQ(square->area(), 16.0);
}

TEST(ShapeTest, RectangleArea) {
    auto rectangle = createShape("rectangle");
    EXPECT_DOUBLE_EQ(rectangle->area(), 24.0);
}
