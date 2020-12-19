#include "../../libs/utils.hpp"
#include <iostream>
#include "VecInt.hpp"
#include <vector>

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

    w = v;

    // vecInt w;
    // w = v;

    auReverse(w.begin(), w.end());

    cout << (v == w ? "It is a polindrome" : "It is not a polindrome") << endl;
}

void problem0202()
{
    vecInt a = {1, 2, 3, 4};
    vecInt b = {5, 6, 7, 8, 9, 10};

    vecInt::counter = 0;
    auSwap(a, b);
    cout << "Number of Integer assignments: " << vecInt::counter << endl;

    for (auto e : a)
    {
        cout << " " << e;
    }
    cout << endl;

    for (auto e : b)
    {
        cout << " " << e;
    }
    cout << endl;
}

template <typename Container>
void print(const Container &v)
{
    for (auto e : v)
    {
        cout << " " << e;
    }
    cout << endl;
}

void problem0301()
{
    vector<int> v;

    for (int x; cin >> x;)
    {
        v.push_back(x);
    }

    print(v);

    for (auto p = v.begin(); p != v.end();)
    {
        if (*p % 2 == 0)
        {
            p = v.insert(p, 0);
            ++p;
        }
        ++p;
    }

    print(v);

    // for (auto p = v.begin(); p != v.end();)
    // {
    //     if(*p % 2 == 0)
    //     {
    //         p = v.erase(p);
    //     }
    //     else
    //     {
    //         ++p;
    //     }

    // }

    auto newEnd = remove_if(v.begin(), v.end(), [](int e) { return e % 2 == 0; });

    v.erase(newEnd, v.end());
    print(v);
}

void problem0302()
{
    vecInt v;

    for (int x; cin >> x;)
    {
        v.pushBack(x);
    }

    print(v);

    for (auto p = v.begin(); p != v.end();)
    {
        if (*p % 2 == 0)
        {
            p = v.insert(p, 0);
            ++p;
        }
        ++p;
    }

    print(v);

    for (auto p = v.begin(); p != v.end();)
    {
        if(*p % 2 == 0)
        {
            p = v.erase(p);
        }
        else
        {
            ++p;
        }

    }

    // auto newEnd = remove_if(v.begin(), v.end(), [](int e) { return e % 2 == 0; });

    // v.erase(newEnd, v.end());
    print(v);
}

int main(void)
{
    // vector<vecInt> v;
    // vecInt::counter = 0;
    // v.push_back(vecInt(1000000));
    // cout << vecInt::counter << endl;

    // Student a = {"StudentA", {5, 5, 4, 5, 5}};

    // cout << a.grades.size() << endl;

    problem0301();
}
