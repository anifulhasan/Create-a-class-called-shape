#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r);
    void setRadius(float r);
    float getRadius() const;
    float getArea() const override;
};

#endif 
