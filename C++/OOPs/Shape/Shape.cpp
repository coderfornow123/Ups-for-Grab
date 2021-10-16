#include<bits/stdc++.h>
#include "Shape.h"
using namespace std;

Shape::Shape(const string& col){
    colour = col;
    this->colour = col;
}

string Shape::getColor() const{
    return colour;
}

void Shape::setColor(const string&col){
    colour = col;
    this->colour = col;
}

void Shape::print() const{
    cout << "Colour of Shape is " << colour << endl;
}

