#include "Complex.h"
using namespace std;

Complex::Complex(double r, double i): real(r), imag(i) {};

Complex& Complex::operator+=(const Complex& lhs){
    this->real += lhs.real;
    this->imag += lhs.imag;
    return *this;
}

Complex& Complex::operator+=(double num){
    this->real += num;
    return *this;
}

Complex& Complex::operator++(){
    ++real;
    return *this;
}

const Complex Complex::operator++(int dummy){
    Complex old(*this);
    ++real;
    return old;
}

bool Complex::operator==(const Complex& rhs) const{
    return (this->real == rhs.real && this->imag == rhs.imag);
}

bool Complex::operator!=(const Complex& rhs) const{
    return !(*this == rhs);
}

ostream& operator<< (ostream& out, const Complex& rhs){
    out<< rhs.real << " i," << " " << rhs.imag << " j" << endl;
    return out;
}

istream & operator>> (istream & in, Complex& c){
    cout << "Enter the real and Complex Part \n";
    in >> c.real >> c.imag;
    return in;
}

const Complex operator+(const Complex& lhs, double d){
    Complex temp;
    temp.real+= d;
    return temp;
}

const Complex operator+( double d, const Complex& lhs){
    Complex temp;
    return (temp + d);
}

const Complex operator+(const Complex& lhs, const Complex& rhs){
    Complex ans(lhs);
                        //ans.real += rhs.real;
                        //ans.imag += rhs.imag;
    return ans+=rhs;    //return ans;
}