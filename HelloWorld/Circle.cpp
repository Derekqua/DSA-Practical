// Circle.cpp - Implementation
#include "Circle.h" 	// Specification of Circle class

Circle::Circle() { }
Circle::Circle(double r) { radius = r; }
void Circle::setRadius(double r) { radius = r; }
double Circle::getRadius() { return radius; }
double Circle::findArea() { return 3.142 * radius * radius; }
