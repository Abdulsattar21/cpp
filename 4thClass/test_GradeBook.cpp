// test_GradBook.cpp
// Created by me on 13.04.2021.
// class Definition
#include <iostream>
#include <string>
using namespace std;
class GradeBook{
public:
    void displayMessage(){
        cout<<"welcome to us! "<< courseName <<endl;
    }

private:
    string courseName;c
};

int main(){
    GradeBook gb;
    gb.displayMessage();
    return 0;
}