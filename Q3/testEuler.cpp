#include <iostream>
#include "Euler.h"
using namespace std;
int main(){
    Euler n1(0);
    Euler n2(0.2);
    Euler n3(0.4);
    n1.add(n2);
    n1.sub(n2);
    n1.mul(n2);
    n1.div(n2);

    if( n1.isEqual(n2) )
        cout << "these are equal" << endl;
    if( n1.isNotEqual(n2) )
        cout << "these are not equal" << endl;
    n1.display(); // (0.7071i + 0.7071)
        return 0;
}


