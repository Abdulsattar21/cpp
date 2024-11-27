#include <string>
using namespace std;
class StudentRecord
{
public:
    StudentRecord(string firstName, string lastName, int* grades);
    // constructor: initializes the data members
    void setName(string firstName, string lastName);
    // sets the values for data members related to first&last name of the student
    void setExamGrades(int* grades); // sets the values for examGrades
    string getLastName(); // outputs the data member related to the last name of the student
    string getFirstName();
    // outputs the data member related to the last name of the student
    void displayName(); // displays the first&last name of the student
    void displayExamGrades(); // displays 3 exam grades
    void displayAverage(); // calculates & displays the average of 3 exam grades
private:
    string studentFirstName;
    string studentLastName;
    int examGrades[3];
    float average;
};