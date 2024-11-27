#include <iostream>
#include <string>
#include "array.h"
using namespace std;
int main(){
    Array a1;
    a1.print();
    cout << "------1" << endl;
    Array a2(5,0);
    a2.print();
    cout << "------2" << endl;
    int arr[]={3,3,3,3,3};
    cout << "------3" << endl;
    Array a3(5, arr);
    a3.print();
    cout << "------4" << endl;
    Array a4(a3);
    a4.print();
    cout << "------5" << endl;
    a1.print();
    a2.add(a3);
    a2.print();
    cout << "------6" << endl;
    a2.subtract(a3);
    a1.print();

    cout << "------7" << endl;
    cout << a3.multiply(a4)<<endl;
    /*
    cout << "------8" << endl;
    cout << a3.getSize()<<endl;
    cout << "------9" << endl;
    cout << a3.getData()[2]<<endl;
    cout << "------10" << endl;
    a2.copy(a3);
    cout << "------11" << endl;
    a2.fill(1);*/
    cout << "------12" << endl;
    a2.print();
    cout << "------13" << endl;
    return 0;
}