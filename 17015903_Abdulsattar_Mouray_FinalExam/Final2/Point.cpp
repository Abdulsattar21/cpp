#include"Point.h"
//default constructor
Point::Point()
{
    x = 0;
    y = 0;
}
//parameterised constructor
Point::Point(double _x, double _y)
{
    setX(_x);
    setY(_y);
}
//getters and setters
double Point::getX()const
{
    return x;
}
double Point::getY()const
{
    return y;
}
void Point::setX(const double _x)
{
    x = _x;
}
void Point::setY(const double _y)
{
    y = _y;
}
void Point::print()
{
    cout << fixed << setprecision(1);
    cout << "(" << x << ", " << y << ")\n";
}

Point& Point::operator= (const Point& p)
{
    this->x = p.x;
    this->y = p.y;
    return *this;
}