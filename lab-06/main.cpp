#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

#include "../libs/utils.hpp"

using namespace std;

struct Student
{
    string mName;
    double mGpa;

    Student(const string &name, double gpa)
        : mName(name), mGpa(gpa)
    {
    }
};

// functor
struct IsEven
{
    //call operator
    bool operator()(int n) const
    {
        return n % 2 == 0;
    }
};

struct GreaterThan
{
    int mX;

    GreaterThan(int x)
        : mX(x)
    {
    }

    bool operator()(int n) const
    {
        return n > mX;
    }
};


void problem0101() //a
{
    int a[] = {3, 1, 20, 4, 7, 0, 5};

    auto p = find(begin(a), end(a), 20);

    if (p != end(a))
    {
        cout << "The index of " << *p << " is " << p - begin(a) << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}

void problem0102()
{
    vector<int> a = {3, 1, 20, 4, 7, 8, 5};  // b

    vector<int>::iterator p = find(begin(a), end(a), 10);

    if (p != end(a))
    {
        cout << "The index of " << *p << " is " << p - begin(a) << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}

void problem0201()
{
    vector<int> a = {3, 1, 20, 4, 7, 0, 5};

    auto it = find_if(begin(a), end(a), IsEven());

    if (it != end(a))
    {
        cout << "The index of the first even number " << *it << " is " << it - begin(a) << endl;
    }
    else
    {
        cout << "even numbers not found" << endl;
    }
}

void problem0202()
{
    vector<int> a = {3, 1, 20, 4, 7, 0, 5};

    auto it = find_if(begin(a), end(a), [](int n) { return n % 2 == 0; });

    if (it != end(a))
    {
        cout << "The index of the first even number " << *it << " is " << it - begin(a) << endl;
    }
    else
    {
        cout << "even numbers not found" << endl;
    }
}

void problem0301()
{
    int x;
    cin >> x;
    vector<int> a = {3, 1, 20, 4, 7, 0, 5};

    auto it = find_if(begin(a), end(a), GreaterThan(x));

    if (it != end(a))
    {
        cout << "number " << *it << " is the first number greater than " << x << endl;
    }
    else
    {
        cout << "even numbers not found" << endl;
    }
}

void problem0302()
{
    int x;
    cin >> x;

    vector<int> a = {3, 1, 20, 4, 7, 0, 5};

    auto it = find_if(begin(a), end(a), [x](int n) { return n > x; });

    if (it != end(a))
    {
        cout << "number " << *it << " is the first number greater than " << x << endl;
    }
    else
    {
        cout << "even numbers not found" << endl;
    }
}

int main()
{
    problem0302();
}

