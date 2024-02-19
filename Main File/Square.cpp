#include "Square.h"

Square::Square(float l) : length(l) {}

void Square::setLength(float l) {
    length = l;
}

float Square::getLength() const {
    return length;
}

float Square::getArea() const {
    return length * length;
}

