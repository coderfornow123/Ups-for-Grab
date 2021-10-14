#include "Shape.h"

class Rectangle : public Shape
{
private:
    int breadth, length;
public:
    Rectangle(int b, int h, const string& col = "Yellow");
    void setBreadth(int b);
    void setLength(int b);
    void setBL(int b, int h);
    int getBreadth() const;
    int getLength() const;
    void print() const;
    double getArea() const;
};
