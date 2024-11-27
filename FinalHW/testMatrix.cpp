#include <iostream>
#include "Matrix.h"
using namespace std;

int main(){
    float data[] = {1, 2, 3, 4, 5, 6};
    Matrix M1(2,3,data);
    float data1[] = {5, 1, 6, 8, 0, 3};
    Matrix M2(2,3,data1);
    cout<<"M1: \n";
    M1.print();
    cout<< endl;
    cout<<"The Transpose of M1 is: " << endl;
    M1.transpose().print();
    cout<< endl;
    cout<<"M2:" << endl ;
    M2.print();
    cout << "\nThe row of M2 is: \n" << M2.getRowN() << endl;
    cout << "The column of M2 is: \n" << M2.getColN() << endl;

    cout<< endl
        << "the sum of (M1+M2) is:" << endl << M1+M2 << endl
        << "the sub of (M1-M2) is:"  << endl << M1-M2 << endl
        << "the multi of (M1*M2) is:"  << endl<< M1*M2 <<endl;
    Matrix temp(M1);
    M1 += M2;
    cout<< "M1 in the += sum operation:" << endl << M1 << endl;
    M1 = temp;
    M1 -= M2;
    cout<< "M1 in the -= sub operation:" << endl << M1 << endl;
    M1 = temp;
    M1 *= M2;
    cout<< "M1 in *= multi operation:" << endl << M1 << endl;
    M1 = temp;
    if(M1 == temp){
        cout<<"M1 = temp" << endl;
    }
    if(M1 != M2){
        cout<<"\nM1 != M2 " << endl;
    }
    const float *values = M2.getData();
    int x = M2.getRowN();
    int y = M2.getColN();
    cout<<"\nthe Values in M2.data[] are:" << endl;
    for(int i=0; i<x*y; i++){
        cout<<values[i]<<" ";
    }
    cout<<"\nfor 0,1 value in M1: "<< M1(0,1) << endl;
    return 0;
}