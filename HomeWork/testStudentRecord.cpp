#include <iostream>
#include <string>
#include "StudentRecord.h"
using namespace std;
int main(){
    int examsGrades[3] = {90,85,88};
    int grades2[3] ={89,82,77};
    StudentRecord stu1("Super", "Man", examsGrades);
    stu1.displayName();
    stu1.displayExamGrades();
    stu1.setName("Spider", "Man");
    stu1.setExamGrades(grades2);
    stu1.displayName();
    stu1.displayExamGrades();
    stu1.displayAverage();
    return 0;
}