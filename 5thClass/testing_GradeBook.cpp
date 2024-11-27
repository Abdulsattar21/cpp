#include <iostream>
#include <string>
#include "Gradebook.h"
using namespace std;
int main(){
    GradeBook gb;
    gb.displayMessage();
    GradeBook gb2("C++");
    gb2.displayMessage();
    string nm ="Java";
    gb2.setCourseName(nm);
    gb2.displayMessage();
    GradeBook gb3(gb2);
    gb3.displayMessage();
    string nm2;
    cout << "Enter the course name: " << endl;
    // cin >> nm2;||| it's the same as getline but I need to see getline...
    getline(cin, nm2);
    GradeBook gb4(nm2);
    gb4.displayMessage();
    return 0;
}