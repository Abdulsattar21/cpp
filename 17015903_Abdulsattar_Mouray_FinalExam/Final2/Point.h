
#include<iomanip>
#include<iostream>
using namespace std;
class Point {
private:
    double x;
    double y;
public:
    //constructor
    Point();
    Point(double _x, double _y);
    //getters and setters
    double getX()const;
    double getY()const;
    void setX(const double _x);
    void setY(const double _y);
    void print();
    Point& operator= (const Point& p);
};