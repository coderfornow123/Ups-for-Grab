#include "Rectangel.h"
#include<bits/stdc++.h>
using namespace std;

Rectangle::Rectangle(int b, int l, const string& col) : Shape(col), breadth(b), length(l) {}

void Rectangle::setBreadth(int b){
    breadth =b;
}

void Rectangle::setLength(int l){
    length = l;
}

void Rectangle::setBL(int b, int l){
    breadth =b;
    length = l;
}

int Rectangle::getBreadth() const{
    return breadth;
}

int Rectangle::getLength() const{
    return length;
}

void Rectangle::print() const{
    cout << "Area of Rectange is " << getArea() <<endl;
    Shape::print();
}

double Rectangle::getArea() const{
    return breadth*length;
}