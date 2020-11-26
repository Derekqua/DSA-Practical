// Circle.h - Specification
#pragma once     // included by Visual Studio

class Circle
{
    // data (properties)
private:
    double radius;

    // functions (methods)
public:
    Circle();		// default constructor 
    Circle(double);	// parameterized constructor 
    void setRadius(double);
    double getRadius();
    double findArea();
};
