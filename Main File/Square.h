#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape {
private:
    float length;

public:
    Square(float l);
    void setLength(float l);
    float getLength() const;
    float getArea() const override;
};

#endif 

