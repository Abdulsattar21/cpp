#include <iostream>
#include "Matrix.h"
using namespace std;

// this operator is used to shown the matrix's value
ostream& operator<<(ostream& output, const Matrix &rhs){
    int cnt = 0;
    for(int i=1; i<=rhs.rowN; i++){
        for (int j = 1; j <=rhs.colN ; j++) {
            output<< rhs.data[cnt] << " ";
            cnt++;
        }
        cout << " \n";
    }
    return output;
}

// initialize Matrix with 1 row & 1 column (1 element) with 0 value
Matrix::Matrix(){
    rowN = 1;
    colN = 1;
    data = new float[1];
    data[0] = 0;
}
// initialize Matrix with row number of rN and column number of cN with zero values
Matrix::Matrix(const int rN,const int cN ){
    rowN = rN;
    colN = cN;
    data = new float[rowN*colN];

    for(int i=0; i<rowN*colN; i++){
        data[i] = 0;
    }
}
// initialize Matrix with another Matrix
Matrix::Matrix(const Matrix &srcMatrix ){
    rowN = srcMatrix.rowN;
    colN = srcMatrix.colN;
    data = new float[rowN*colN];
    for(int i=0; i<rowN*colN; i++){
        data[i] = srcMatrix.data[i];
    }
}
// initialize Matrix with row number rN, col number cN and a pointer to an array
Matrix::Matrix(const int rN, const int cN, const float *srcPtr){
    rowN = rN;
    colN = cN;
    data = new float[rowN*colN];
    for(int i=0; i<rowN*colN; i++){
        data[i] = srcPtr[i];
    }
}
const float* Matrix::getData()const{
    int size = rowN*colN;
    float *temp = new float[size];
    for(int i=0; i<size; i++){
        temp[i] = data[i];
    }
    return temp;
}
int Matrix::getRowN()const{
    return rowN;
}
int Matrix::getColN()const{
    return colN;
}
// prints the Matrix object in rowN*colN form
void Matrix::print()const{
    for(int i=0; i<rowN*colN; i++){
        cout<< data[i] << " ";
        if((i+1)%colN == 0){
            cout<<endl;
        }
    }
}
Matrix Matrix::transpose(){
    Matrix t(colN, rowN);
    int k = 0;
    for(int i=0; i<colN; i++){
        int index = i;
        for(int j=0; j<rowN; j++){
            t.data[k] = data[index];
            k++;
            index += colN;
        }
    }
    return t;
}
Matrix Matrix::operator+(const Matrix &rhsMatrix)const{
    Matrix temp(*this);
    for(int i=0; i<rowN*colN; i++){
        temp.data[i] += rhsMatrix.data[i];
    }
    return temp;
}
Matrix Matrix::operator-(const Matrix &rhsMatrix)const{
    Matrix temp(*this);
    for(int i=0; i<rowN*colN; i++){
        temp.data[i] -= rhsMatrix.data[i];
    }
    return temp;
}
Matrix Matrix::operator*(const Matrix &rhsMatrix)const{
    Matrix temp(*this);
    for(int i=0; i<rowN*colN; i++){
        temp.data[i] *= rhsMatrix.data[i];
    }
    return temp;
}
float Matrix::operator()(const int r,const int c)const{
    int index = (r*colN)+c;
    return data[index];
}
float& Matrix::operator[](int ind){
    return data[ind];
}
float Matrix::operator[](int ind) const{
    return data[ind];
}
Matrix& Matrix::operator=(const Matrix &rhsMatrix){
    rowN = rhsMatrix.rowN;
    colN = rhsMatrix.colN;
    delete data;
    data = new float[rowN*colN];
    for(int i=0; i<rowN*colN; i++){
        data[i] = rhsMatrix.data[i];
    }
    return *this;
}
Matrix& Matrix::operator+=(const Matrix &rhsMatrix){
    for(int i=0; i<rowN*colN; i++){
        data[i] += rhsMatrix.data[i];
    }
    return *this;
}
Matrix& Matrix::operator-=(const Matrix &rhsMatrix){
    for(int i=0; i<rowN*colN; i++){
        data[i] -= rhsMatrix.data[i];
    }
    return *this;
}
Matrix Matrix::operator*=(const Matrix &rhsMatrix)const{
    for(int i=0; i<rowN*colN; i++){
        data[i] *= rhsMatrix.data[i];
    }
    return *this;
}
int Matrix::operator==(const Matrix &rhsMatrix)const{
    for(int i=0; i<rowN*colN; i++){
        if(data[i] != rhsMatrix.data[i]){
            return 0;
        }
    }
    return 1;
}
int Matrix::operator!=(const Matrix &rhsMatrix)const{
    return !(*this == rhsMatrix);
}