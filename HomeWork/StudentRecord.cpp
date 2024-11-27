#include <iostream>
#include <string>
#include "StudentRecord.h"
using namespace std;
StudentRecord::StudentRecord(string firstName, string lastName, int *grades) {
    studentFirstName =firstName;
    studentLastName = lastName;
    examGrades[0] = grades[0];
    examGrades[1] = grades[1];
    examGrades[2] = grades[2];
}
void StudentRecord::setName(string firstName, string lastName) {
    studentFirstName =firstName;
    studentLastName = lastName;
}
void StudentRecord::setExamGrades(int *grades) {
    examGrades[0] = grades[0];
    examGrades[1] = grades[1];
    examGrades[2] = grades[2];
}
string StudentRecord::getFirstName() {
    return studentFirstName;
}
string StudentRecord::getLastName() {
    return studentLastName;
}
void StudentRecord::displayName() {
    cout << studentFirstName << " "<< studentLastName << endl;
}
void StudentRecord::displayExamGrades() {
    cout<<"The 1st Grade is: "<< examGrades[0]<< endl << "The 2nd Grade is: "
    << examGrades[1]<< endl << "The 3rd Grade is: " << examGrades[2] << endl;
}
void StudentRecord::displayAverage() {
    float arg;
    arg = (examGrades[0]+examGrades[1]+examGrades[2])/3;
    cout << "The average is: " << arg << endl;
}