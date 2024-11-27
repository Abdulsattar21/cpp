#include <iostream>
#include <string>
#include "array.h"
using namespace std;
Array::Array(){
    size=1;
    data=new int[size];
    for (int i=0; i<size; i++)
        data[i]=0;
}
Array::Array(const int SIZE, const int value) {
    data = new int[SIZE];
    for (int i=0; i<SIZE; i++){
        data[i]=0;
    }
}
Array::Array(const int SIZE, const int *arr) {
    data = new int[SIZE];
    for (int i = 0; i < SIZE; ++i) {
        data[i] = arr[i];
    }
}
Array::Array(const Array &array) {
    data = new int[array.size];
    for (int i = 0; i < size; ++i) {
        data[i] =array.data[i]; // I didn't understand this well
    }
}
void Array::add(const Array &array) {
    if(size != array.size){
        cout << "This is opr is not possible! " << endl;
        return ;
    }
    for (int i = 0; i < size; ++i) {
        data[i] =array.data[i];
    }
}
void Array::subtract(const Array &array) {
    if(size != array.size){
        cout << "This is opr is not possible! " << endl;
        return ;
    }
    for (int i = 0; i < size; ++i) {
        data[i] =array.data[i];
    }
}
int Array::multiply(const Array &array) {
    if(size != array.size){
        cout << "This is opr is not possible! " << endl;
        return 0;
    }
    for (int i = 0; i < size; ++i) {
        data[i] =array.data[i];
    }
    return 0;
}
void Array::copy(const Array &array) {
    for (int i = 0; i < size; ++i) {
        data[i] =array.data[i];
    }
}
int Array::getSize() {
    return size;
}
int * Array::getData() {
    return data;
}
void Array::fill(const int value) {
    for (int i = 0; i < size; ++i) {
        data[i] = value;
    }
}
void Array::print() {
    for (int i = 0; i < size; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;
}
