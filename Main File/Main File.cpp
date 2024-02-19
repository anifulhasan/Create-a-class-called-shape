#include <iostream>
#include "Circle.h"
#include "Square.h"

using namespace std;

int main() {

    Circle circle(3);
    Square square(5);

    cout << "Circle\nRadius: " << circle.getRadius() << "\nArea: " << circle.getArea() << endl << endl;

    cout << "Square:\nLength: " << square.getLength() << "\nArea: " << square.getArea() << endl;

    return 0;
}
