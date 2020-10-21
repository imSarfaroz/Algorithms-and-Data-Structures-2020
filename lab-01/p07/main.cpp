// user-defined type

#include <iostream>
#include <stdexcept>

using namespace std;

class Rational
{

    int mNum;
    int mDen;

public:
    Rational(int num, int den)
    {
        mNum = num;
        mDen = den;
        if (mDen == 0)
        {
            throw runtime_error("Rational: denominator is equal to zero");
        }
    }

    int num() const
    {
        return mNum;
    }

    int den() const
    {
        return mDen;
    }
};

Rational operator+(const Rational &a, const Rational &b)
{
    int tNum = a.num() * b.den() + a.den() * b.num();
    int tDen = a.den() * b.den();

    return Rational(tNum, tDen);
}

ostream &operator<<(ostream &out, const Rational &r)
{
    return out << r.num() << "/" << r.den();
}
int main()
{
    try
    {
        Rational r1(1, 2);
        Rational r2(2, 3);
        cout << r1 + r2 << endl;
    }
    catch (runtime_error &e)
    {
        cout << e.what() << endl;
    }
}