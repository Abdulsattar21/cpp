#include <string>
using namespace std;
class GradeBook{
public:
    GradeBook();
    GradeBook(string name);
    GradeBook(GradeBook& rhs);
    void setCourseName(string name);
    void displayMessage();

private:
    string CourseName;
};