#include <iostream>
#include <string>
#include <numeric>
#include <algorithm>
#include "Rational.h"
using namespace std;
Rational::Rational(){
    this->Num = 1;
    this->Den = 1;
}
Rational::Rational(int a, int b){
    Num = a;
    Den = b;
}
Rational::Rational(Rational X){
    Num = X.Num;
    Den = X.Den;

}
Rational::SetNumDen(int a, int b){
    Num = a;
    Den = b;
}
int Rational::simplfy() {
    gcd(Num, Den);
}