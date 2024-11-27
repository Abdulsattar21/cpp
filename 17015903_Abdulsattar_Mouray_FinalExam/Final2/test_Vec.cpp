//test_Vec.cpp
#include "Point.h"
#include "Vec.h"
#include <iostream>
using namespace std;
int main()
{
    Point p1(1.0, 3.0);
    Point p2(2.0, 1.2);
    Point p3(3.2, 3.4);
    Point data1[3] ={p1, p2, p3};
    Point data2[3] ={p3, p2, p1};
    Point data3[3] ={p1, p2, p3};
    Vec v1(data1, 3); v1.print();
    Vec v2(data2, 3); v1.print();
    Vec v3(data3, 3); v3.print();
    v3=v2; v3.print();
    v1+=v2; cout << v1;
    v1[0].print();
}