#include <iostream>

using namespace std;

struct T
{
    int n;
    char c;
    double d;
};

int main()
{
    T x;

    x.c = 'A';

    cout << x.n << endl;
    cout << x.c << endl;
    cout << x.d << endl;

    cout << sizeof(x) << endl;
}