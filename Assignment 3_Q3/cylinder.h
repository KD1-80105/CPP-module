#ifndef cyl_h
#define cyl_h
#include <iostream>
using namespace std;

class cylinder
{
private:
    double radius;
    double height;
    double volume;

public:
    cylinder();
    cylinder(double radius, double height);
    double getRadius();
    double setRadius(double r);
    double getHeight();
    double setHeight(double h);
    double getVolume();
    double printVolume();
};

#endif