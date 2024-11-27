#include <iostream>
#include <string>
using namespace std;
class Student{
public:
    Student(string nm){
        setName(nm);
    }
    void displayName(){
        cout << "the name is: " << Name << endl;
    }
    void setName(string nm){
        Name = nm;
    }
private:
    string Name;
};

int main() {
    Student st1 ("super");
    st1.displayName();
    st1.setName("Super_Man");
    st1.displayName();
    return 0;
}
