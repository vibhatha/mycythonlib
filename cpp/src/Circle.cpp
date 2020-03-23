#include "../include/Circle.h"

using namespace shapes;

Circle::Circle(int X0, int Y0, int RADIUS)
{
    x0 = X0;
    y0 = Y0;
    radius = RADIUS;
}

Circle::~Circle()
{
}

int Circle::getCircumference()
{
    return 2 * 3 * radius;
}

int Circle::getRadius()
{
    return radius;
}

int Circle::getArea()
{
    return 3 * radius * radius;
}
