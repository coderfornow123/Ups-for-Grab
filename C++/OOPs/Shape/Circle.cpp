#include<bits/stdc++.h>
#include "Circle.h"
#define PI 3.14;
/*
Circle::Circle(int r, const string & col){
    Shape(col);
    radius = r;
}*/

Circle::Circle(int radius, const string & color)
   : Shape(color), radius(radius) { }
 
int Circle::getRadius() const{
    return radius;
}

void Circle::setRadius(int r){
    radius = r;
}

void Circle::print() const{
    cout << " Radius of Circle is " << radius << endl;
    Shape::print();
}

double Circle::getArea() const{
    return radius*radius*PI;
}