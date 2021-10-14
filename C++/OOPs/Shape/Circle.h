#include "Shape.h"

class Circle: public Shape
{
private:
    int radius;
public:
    Circle(int r = 1, const string& col = "Red");
    void setRadius(int r);
    int getRadius() const;
    void print() const;
    double getArea() const;

};