// user-defined type

#include <iostream>
#include <stdexcept>
#include <cctype>

using namespace std;

class Rational
{

    int mNum;
    int mDen;

public:
    Rational(int num = 0, int den = 1)
        : mNum(num), mDen(den)
    {
        if (mDen == 0)
        {
            throw runtime_error("Rational: denominator is equal to zero");
        }
        if (mDen < 0)
        {
            mNum = -mNum;
            mDen = -mDen;
        }

        int a = mNum < 0 ? -mNum : mNum;
        int b = mDen < 0 ? -mDen : mDen;

        while (b != 0)
        {
            int t = a % b;
            a = b;
            b = t;
        }

        mNum /= a;
        mDen /= a;
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

Rational operator-(const Rational &a, const Rational &b)
{
    int tNum = a.num() * b.den() - a.den() * b.num();
    int tDen = a.den() * b.den();

    return Rational(tNum, tDen);
}

Rational operator*(const Rational &a, const Rational &b)
{

    return Rational(a.num() * b.num(), a.den() * b.den());
}

Rational operator/(const Rational &a, const Rational &b)
{
    if (b.num() == 0)
    {
        throw runtime_error("Rational: devision by zero");
    }
    return Rational(a.num() * b.den(), a.den() * b.num());
}

istream &operator>>(istream &inp, Rational &r)
{
    int num;
    if (!(inp >> num))
    {
        return inp;
    }

    char ch;
    if (!(inp.get(ch)))
    {
        return inp;
    }

    if (ch != '/')
    {
        inp.setstate(ios_base::failbit);
        return inp;
    }

    if (!(cin.get(ch)))
    {
        return inp;
    }

    if (ch == '+' || ch == '-' || isdigit(ch))
    {
        inp.putback(ch);
    }
    else
    {
        inp.setstate(ios_base::failbit);
        return inp;
    }

    int den;
    if (!(inp >> den))
    {
        return inp;
    }
    r = Rational(num, den);

    return inp;
}

ostream &operator<<(ostream &out, const Rational &r)
{
    return out << r.num() << "/" << r.den();
}

int main()
{
    // user-defined type (class)
    try
    {
        for (Rational r1, r2; cin >> r1 >> r2;)
        {
            cout << r1 + r2 << endl;
            cout << r1 - r2 << endl;
            cout << r1 * r2 << endl;
            cout << r1 / r2 << endl;
        }
    }
    catch (runtime_error &e)
    {
        cout << e.what() << endl;
    }
}