#include "../../libs/utils.hpp"
#include <iostream>
#include "VecInt.hpp"
 
using namespace std;


void problem04()
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

    void problem05()
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

int main(void)
{
    problem04();
}