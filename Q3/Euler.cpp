#include <iostream>
#include "Euler.h"
using namespace std;
Euler::Euler(double x) {
    this->x = x;
    real = cos(x);
    imaginary = sin(x);
}
void Euler::add(Euler rhs) {
    this->x += rhs.x;
}
void Euler::sub(Euler rhs) {
    this->x -= rhs.x;
}
void Euler::div(Euler rhs) {
    this->x /= rhs.x;
}
void Euler::mul(Euler rhs) {
    this->x *= rhs.x;
}
int Euler::isEqual(Euler rhs) {
    if (this->real== rhs.real&& this->imaginary==rhs.imaginary){
        return true;
    }else{
        return false;
    }
}
int Euler::isNotEqual(Euler rhs) {
    if (this->real!= rhs.real && this->imaginary!=rhs.imaginary){
        return true;
    }else{
        return false;
    }
}
void Euler::display() {
    cout << "(" << imaginary<< "i + " << real<<")"<<endl;
}
