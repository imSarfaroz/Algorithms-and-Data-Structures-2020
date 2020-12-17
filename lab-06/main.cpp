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

int main()
{
    problem0102();
}

