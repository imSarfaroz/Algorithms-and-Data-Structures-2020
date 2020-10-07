#include <iostream>
#include <string>

using namespace std;

int main()
{
    // value semantics (both for fundamental and user-defined types)
    int x = 3;
    int y = x;
    ++y;
    cout << x << "\n";

    string b = "Hello";
    string t = b;
    t += "!!!";
    cout << b << "\n";
}