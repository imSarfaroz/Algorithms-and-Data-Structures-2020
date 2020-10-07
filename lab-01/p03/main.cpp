#include <iostream>
#include <algorithm>

#include "utils.h"

using namespace std;

// pass by value
void badSwap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}

// C - way
void goodSwap01(int *p, int *q)
{
    int t = *p;
    *p = *q;
    *q = t;
}

//C++ - way
void goodSwap02(int &p, int &q)
{
    int t = p;
    p = q;
    q = t;
}

int main()
{
    cout << "1st int: ";
    int a;
    cin >> a;

    cout << "2nd int: ";
    int b;
    cin >> b;

    //min, max,
    //swap(a, b) - zero runtime cost abstraction
    cout << "std::swap:";
    cout << "Before swap a = " << a << ", b = " << b << "\n";
    swap(a, b);
    cout << "After swap a = " << a << ", b = " << b << "\n";

    cout << "BadSwap:\n";
    cout << "Before swap a = " << a << ", b = " << b << "\n";
    badSwap(a, b);
    cout << "After swap a = " << a << ", b = " << b << "\n";

    cout << "goodSwap01:\n";
    cout << "Before swap a = " << a << ", b = " << b << "\n";
    //pass by value
    goodSwap01(&a, &b);
    cout << "After swap a = " << a << ", b = " << b << "\n";

    cout << "goodSwap02:\n";
    cout << "Before swap a = " << a << ", b = " << b << "\n";
    //pass by reference
    goodSwap02(a, b);
    cout << "After swap a = " << a << ", b = " << b << "\n";    

    cout << "general swap for doubles:\n";
    double x = 3.14;
    double y = 1.67;
    cout << "Before swap x = " << x << ", y = " << y << "\n";
    //pass by reference
    auSwap(x, y);
    cout << "After swap x = " << x << ", y = " << y << "\n";

    cout << "general swap for strings:\n";
    string s1 = "Hello";
    string s2 = "World";

    cout << "Before swap x = " << s1 << ", y = " << s2 << "\n";
    //pass by reference
    auSwap(s1, s2);
    cout << "After swap x = " << s1 << ", y = " << s2 << "\n";
}