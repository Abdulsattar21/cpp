#include <iostream>
#include <iomanip>
using namespace std;
class Point{
public:
    Point(float srcx, float srcy){
        setXY(srcx, srcy);
    }
    void displayPoint(){
        cout << "The 2D point is: (" << x << ", " <<y <<")" << endl;
        /// we can use setprecision(2) to make 2 num after comma
        /// "  <<  setprecision(2) << y <<")
    }
    void setXY(float srcx, float srcy){
        x=srcx;
        y=srcy;
    }
private:
    float x;
    float y;
};

int main() {
    Point p1(2,3);
    p1.displayPoint();
    p1.setXY(0,0);
    p1.displayPoint();

}
