class Rational
{
public:
    Rational();
    Rational(int a ,int b);
    Rational(Rational &X);
    setNumDen(int a, int b);
    simplfy();
private:
    int Num, Den;
    double x;
};