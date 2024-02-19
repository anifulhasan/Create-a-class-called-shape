#include "Circle.h"
#include <cmath>

Circle::Circle(float r) : radius(r) {}

void Circle::setRadius(float r) {
    radius = r;
}

float Circle::getRadius() const {
    return radius;
}

float Circle::getArea() const {
    return 3.14159 * pow(radius, 2);
}

