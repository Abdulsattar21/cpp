#include <iostream>
#include <string>
#include "Gradebook.h"
using namespace std;
GradeBook::GradeBook() {
    (*this).setCourseName("C++");
}
GradeBook::GradeBook(string name) {
    setCourseName(name);
}
GradeBook::GradeBook(GradeBook &rhs) {
    setCourseName(rhs.CourseName);
}
void GradeBook::setCourseName(string name) {
    CourseName = name;
}
void GradeBook::displayMessage() {
    cout << "Welcome to the Grade Book for " << CourseName << endl;
}
