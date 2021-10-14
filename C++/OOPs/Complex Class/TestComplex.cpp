#include "Complex.h"
using namespace std;

int main(){
    Complex c1(4.5, 5.6);
    cout<<c1;
    Complex c2  = (Complex)(6.7, 10.11);
    cout<<c2;
    c2 += c1;
    cout<< c2;
    Complex c3 = c1 + c2;
    cout << "----------------\n";
    cout<<c1;
    cout<< c2;   
    cout << c3;
    cout << "----------------\n";
    Complex c4 = c1+ c2 + c3;
    cout << c4;
    cout << c4++;
    cout << c4;
    cout << ++c4;

}