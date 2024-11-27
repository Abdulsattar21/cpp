#include <iostream>
#include <string>
#include "Str.h"
#include ""
using namespace std;
Str::Str() {
}
Str::Str(const int *arr) {
    while (*arr != '\0'){
        data[n]=arr[n];
        (*arr)++;
        n++;
    }
    n=0
}
Str::Str(const Array &array) {
//  size = sizeof(array);
    data = new int[array.size];
    for (int i = 0; i < array.size; ++i) {
        data[i]=array.data[i];
    }
}
int Str::getSize() {
    return ;
}