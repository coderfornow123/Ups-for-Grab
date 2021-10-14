#include<bits/stdc++.h>
#include "Rectangel.h"
#include "Circle.h"
using namespace std;

int main(){
   
   Circle c1(5, "blue");
   c1.print();
   cout << endl;
   cout << "area=" << c1.getArea() << endl;
 
   Rectangle r1(5, 6, "green");
   r1.print();
   cout << endl;
   cout << "area=" << r1.getArea() << endl;
 
  // Shape s1;  // Cannot create instance of abstract class Shape
 
   // Polymorphism
   Shape * s1, * s2;  // Shape pointers
 
   s1 = new Circle(6);  // Dynamically allocate a subclass instance
   s1->print();   // Run subclass version
   cout << endl;
   cout << "area=" << s1->getArea() << endl;  // Run subclass version of getArea()
 
   s2 = new Rectangle(7, 8);  // Dynamically allocate a subclass instance
   s2->print();   // Run subclass version
   cout << endl;
   cout << "area=" << s2->getArea() << endl;  // Run subclass version of getArea()
 
   delete s1;
   delete s2;
 
// Shape s3 = Circle(6);  // error: cannot allocate an object of abstract type 'Shape'
 
   Circle c3(8);
   Shape & s3 = c3;    // Object reference
   s3.print();
   cout << endl;
   cout << "area=" << s3.getArea() << endl;
 
   Circle c4(9);
   Shape * s4 = &c4;   // Object pointer
   s4->print();
   cout << endl;
   cout << "area=" << s4->getArea() << endl;
}
