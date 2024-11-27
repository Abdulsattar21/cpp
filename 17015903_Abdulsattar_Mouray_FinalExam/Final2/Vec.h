
#include"Point.h"
class  Vec {
private:
    Point* pData;
    int size;
public:
    //constructor
    ~Vec();//destructor
    Vec(Point* p, int size);
    void print();
    Vec& operator=(const Vec& v);
    Vec& operator+=(const Vec& v);
    Point& operator[](const int index);
    friend ostream& operator<<(ostream& out, const Vec& v);
};