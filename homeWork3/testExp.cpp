#include <iostream>
#include <string>
#include "Exp.h"
#include <cmath>
using namespace std;
int main(){
    Exp exp1(2);
    exp1.print();
    cout << exp1.apprErr();
    return 0;
}