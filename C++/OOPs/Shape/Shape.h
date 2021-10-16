<<<<<<< HEAD
/*
    Header File - Only Declarations
*/
#include<string>
using namespace std;

class Shape                             // ! Abstract CLass - cannot create any instance, inherit in a derived class and use
=======
#include<string>
using namespace std;

class Shape
>>>>>>> 6b0e4cb65c5f4f8cb1ec09e85a47e24407d1fd0f
{
private:
    string colour;
public:
    Shape(const string& col = "Red");
    string getColor() const;
<<<<<<< HEAD
    void setColor(const string& col);   
    void virtual print() const;             // ! Virtual Function    
    virtual double getArea() const =0;      // ! Pure Virtual Function - They have no body or implementation
                                            // !  their implementation is defined in dervied class according to the need                      
=======
    void setColor(const string& col);
    void virtual print() const;
    virtual double getArea() const =0;   
>>>>>>> 6b0e4cb65c5f4f8cb1ec09e85a47e24407d1fd0f
};
