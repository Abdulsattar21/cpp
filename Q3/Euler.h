class Euler
{
public:
    Euler(double x);
    void add(Euler rhs);
    void sub(Euler rhs);
    void mul(Euler rhs);
    void div(Euler rhs);
    int isEqual(Euler rhs);
    int isNotEqual(Euler rhs);
    void setTheta(double t);
    void getTheta();
    void display();

private:
    double xp;
    double real, imaginary;
    double th;
};