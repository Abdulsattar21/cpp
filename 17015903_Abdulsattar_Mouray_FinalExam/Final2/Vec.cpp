#include"Vec.h"
Vec::Vec(Point* p, int size)
{
    this->size = size;
    pData = new Point[size];
    for (int i = 0; i < size; i++)
    {
        pData[i] = p[i];
    }
}
Vec::~Vec()
{
    delete[] pData;
    pData = nullptr;
}
void Vec::print()
{
    for (int i = 0; i < size; i++)
    {
        pData[i].print();
    }
    cout << endl;
}
Vec& Vec::operator=(const Vec& v)
{

    for (int i = 0; i < size; i++)
    {
        this->pData[i] = v.pData[i];
    }
    return *this;
}
Vec& Vec::operator+=(const Vec& v)
{
    for (int i = 0; i < size; i++)
    {
        this->pData[i].setX(pData[i].getX() + v.pData[i].getX());
        this->pData[i].setY(pData[i].getY() + v.pData[i].getY());
    }
    return *this;
}
Point& Vec::operator[](const int index)
{
    return pData[index];
}
ostream& operator<<(ostream& out, const Vec& v)
{
    for (int i = 0; i < v.size; i++)
    {
        out << "(" << v.pData[i].getX() << ", " << v.pData[i].getY() << ")" << endl;
    }
    cout<<endl;
    return out;
}