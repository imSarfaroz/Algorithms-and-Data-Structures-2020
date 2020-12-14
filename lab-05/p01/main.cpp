#include "../../libs/utils.hpp"
#include <iostream>
#include "VecInt.hpp"

using namespace std;

void problem0101()
{
    int n;
    cin >> n;

    vecInt v(n);

    for (size_t i = 0; i < v.size(); ++i)
    {
        cin >> v[i];
    }

    v.pushBack(42);

    for (int e : v)
    {
        cout << e << " ";
    }
    cout << endl;

    auReverse(v.begin(), v.end());

    for (int e : v)
    {
        cout << e << " ";
    }
    cout << endl;
}

void problem0102()
{
    vecInt v;

    for (int x; cin >> x;)
    {
        v.pushBack(x);
    }

    for (int e : v)
    {
        cout << e << " ";
    }
    cout << endl;

    auReverse(v.begin(), v.end());

    for (int e : v)
    {
        cout << e << " ";
    }
    cout << endl;

    //free(v.p);
}

void problem0201()
{
    vecInt v;
    for (int x; cin >> x;)
    {
        v.pushBack(x);
    }

    vecInt w;
    w.pushBack(-1);
    w.pushBack(-2);
    w.pushBack(-3);

    w = v;

    // vecInt w;
    // w = v;

    auReverse(w.begin(), w.end());

    cout << (v == w ? "It is a polindrome" : "It is not a polindrome") << endl;
}
int main(void)
{
    problem0201();
}
