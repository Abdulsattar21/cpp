#include <iostream>
#include <string>
#include "Array.h"
using namespace std;
Array::Array() {
    size=1;
    data=new int[size];
    for (int i=0; i<size; i++){
        data[i]=0;
    }
}
Array::Array(const int SIZE, const int value) {
    size=5;
    data= new int[SIZE];
    for (int i  = 0; i < SIZE; ++i) {
        data[i]=value;
    }
}
Array::Array(const int SIZE, const int *arr) {
    size=5;
    data = new int[SIZE];
    for (int i  = 0; i < SIZE; ++i) {
        data[i]=arr[i];
    }
}
Array::Array(const Array &array) {
    size=5;
    data = new int[array.size];
    for (int i = 0; i < array.size; ++i) {
        data[i]=array.data[i];
    }
}
void Array::add(const Array &array) {
    for (int i = 0; i < size; ++i) {
        data[i] *= array.data[i];
    }
}
// it's subtract instead of float
void Array::subtract(const Array &array) {
    for (int i = 0; i < size; ++i) {
        data[i] *= array.data[i];
    }
}
int Array::multiply(const Array &array) {
    int sum =0;
    for (int i = 0; i < size; ++i) {
        sum += (data[i] * array.data[i]);
    }
    return sum; // prob
}
void Array::copy(const Array &array) {
    data = new int[array.size];
    for (int i  = 0; i < array.size; ++i) {
        data[i]=array.data[i];
    }
}
int Array::getSize() {
    return size;
}
int * Array::getData() {
    return data;
}
void Array::fill(const int value) {
    for (int i  = 0; i < size; ++i) {
        data[i]=value;
    }
}
void Array::print() {
    cout << "[ ";
    for (int i  = 0; i < size; ++i) {
        cout << data[i] << " ";
    }
    cout << " ]" << endl;
}