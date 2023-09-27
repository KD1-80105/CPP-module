#include "./cylinder.h"
#include <iostream>
using namespace std;

cylinder::cylinder(double radius, double height)
{
    this->radius = radius;
}
double cylinder:: getRadius()
{
    return radius;
}
double cylinder::setRadius(double r)
{
    this->radius = r;
}
double cylinder::getHeight()
{
    return height;
}
double cylinder::setHeight(double h)
{
    this->radius=h;
}
double cylinder::getVolume()
{
    return volume;
}
double cylinder::printVolume()
{
    cout << "radius =" << endl;
    cout << "height =" << endl;
    cout << "volume of cylinder =" << endl;
}