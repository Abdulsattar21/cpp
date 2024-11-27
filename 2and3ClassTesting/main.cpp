#include <iostream>
using namespace std;
class gradeBook{
public:
    void setCourseName(string name){
        courseName = name;
    }
    void displayMessage(){
        cout << "Welcome to the Grade Book!" << endl <<"The course name is: "<< courseName << endl;
    }

private:
    string courseName;
};
int main() {
    gradeBook book1;
    string name;
    cout << "Enter your course name: ";
    cin >> name;
    book1.setCourseName(name);
    book1.displayMessage();
    return 0;
}
