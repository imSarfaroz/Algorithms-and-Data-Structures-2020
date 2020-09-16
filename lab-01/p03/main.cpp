#include <iostream>
#include <algorithm>

// pass by value
void badSwap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}
using namespace std;

int main()
{
    cout << "1st int: ";
    int a;
    cin >> a;

    cout << "2nd int: ";
    int b;
    cin >> b;

    cout << "Before swap a = " << a << ", b = " << b << "\n";
    //swap(a, b) - zero runtime cost abstraction
    swap(a, b);
    cout << "After swap a = " << a << ", b = " << b << "\n";

    cout << "Before swap a = " << a << ", b = " << b << "\n";
    //swap(a, b) - zero runtime cost abstraction
    badSwap(a, b);
    cout << "After swap a = " << a << ", b = " << b << "\n";
}