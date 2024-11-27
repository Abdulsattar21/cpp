#include <iostream>
#include "Exp.h"
#include <cmath>
using namespace std;
Exp::Exp(const int n_val) {
    n=n_val;
}
double Exp::apprErr() {
    double error;
    error = abs(value() - 2.7182);
    // error = fabs(value() - 2.7182) ;
    return error;
}
double Exp::value() {
    double sum=0;
    for (int i = 0; i <= n;i++) {
        double fa=1;
        for (int j = 1; j <= i; j++) {
            fa*=j;
            sum += 1.0/fa;
        }
    }
    return sum;
}
void Exp::print() {
    cout<< value()<<endl;
}