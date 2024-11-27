#include <iostream>
#include <iomanip>
using namespace std;
class Point{
public:
    Point(float srcx, float srcy){
        setXY(scrx, srcy);
    }
    void displayPoint(){
        cout << "(" << x << ", " <<y <<")" << endl;
    }
    void setXY(float srcx, float srcy){
        x=srcx;
        y=srcy;
    }
private:
    float x,y;
};

int main() {
    Point p1(5,6);
    p1.setXY(0,0);
    p1.displayPoint();

}
