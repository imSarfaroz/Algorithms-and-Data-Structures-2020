#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

#include "../libs/utils.hpp"

using namespace std;

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

struct Student
{
    string mName;
    double mGpa;

    Student(const string &name, double gpa)
        : mName(name), mGpa(gpa)
    {
    }
};

void problem0101()
{
    int a[] = {3, 1, 20, 4, 7, 0, 5};

    auto p = auFind(begin(a), end(a), 2);

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
    vector<int> a = {3, 1, 20, 4, 7, 0, 5};

    vector<int>::iterator p = auFind(begin(a), end(a), 1);

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

    auto it = auFindIf(begin(a), end(a), IsEven());

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
    vector<int> a = {3, 1, 20, 4, 7, 8, 5};

    auto it = auFindIf(begin(a), end(a), [](int n) { return n % 2 == 0; });

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

    auto it = auFindIf(begin(a), end(a), GreaterThan(x));

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

    auto it = auFindIf(begin(a), end(a), [x](int n) { return n > x; });

    if (it != end(a))
    {
        cout << "number " << *it << " is the first number greater than " << x << endl;
    }
    else
    {
        cout << "even numbers not found" << endl;
    }
}

void problem04()
{
    vector<int> v = {3, 1, 2, 3, -2, 10};
    auto p = auMinElement2(begin(v), end(v));

    if (p != end(v))
    {
        cout << "Min value: " << *p << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}

void example08()
{
    vector<Student> students = {{"StudentD", 2.7}, {"StudentA", 4.0}, {"StudentX", 3.2}};
    auto IterToMin = auMinElement(begin(students), end(students), [](const Student &s1, const Student &s2) {
        return s1.mGpa < s2.mGpa;
    });

    cout << IterToMin->mGpa << " " << IterToMin->mName << endl;
}

void example09()
{
    vector<Student> students = {{"StudentD", 2.7}, {"StudentA", 4.0}, {"StudentX", 3.2}};
    sort(begin(students), end(students), [](const Student &s1, const Student &s2) { return s1.mName < s2.mName; });
    for (const auto &s : students)
    {
        cout << s.mName << " " << s.mGpa << endl;
    }
}

void example10()
{
    vector<Student> students = {{"StudentD", 2.7}, {"StudentA", 4.0}, {"StudentX", 3.2}};
    sort(begin(students), end(students), [](const Student &s1, const Student &s2) { return s1.mGpa < s2.mGpa; });
    for (const auto &s : students)
    {
        cout << s.mName << " " << s.mGpa << endl;
    }
}

void example11()
{
    vector<Student> students = {
        {"StudentD", 3.2},
        {"StudentA", 4.0},
        {"StudentX", 2.7},
        {"StudentC", 2.7},
        {"StudentR", 3.2},
        {"StudentE", 3.2},
        {"StudentR", 2.7},
        {"StudentD", 4.0},
        {"StudentA", 2.7},
        {"StudentX", 2.7},
        {"StudentC", 3.2},
        {"StudentK", 4.0},
        {"StudentE", 4.0},
        {"StudentR", 2.7},
        {"StudentR", 3.2},
        {"StudentD", 2.7},
        {"StudentA", 4.0},
        {"StudentX", 3.2},
        {"StudentC", 2.7},
        {"StudentK", 4.0},
        {"StudentE", 3.2},
        {"StudentR", 4.0}};

    sort(begin(students), end(students), [](const Student &s1, const Student &s2) { return s1.mName < s2.mName; });

    for (const auto &s : students)
    {
        cout << s.mName << " " << s.mGpa << endl;
    }
    cout << "----" << endl;

    //sort(begin(students), end(students), [](const Student &s1, const Student &s2) { return s1.mGpa < s2.mGpa; });

    stable_sort(begin(students), end(students), [](const Student &s1, const Student &s2) { return s1.mGpa < s2.mGpa; });

    for (const auto &s : students)
    {
        cout << s.mName << " " << s.mGpa << endl;
    }
}

void example12()
{
    vector<pair<string, double>> students;

    string name;
    double gpa;
    while (cin >> name >> gpa)
    {
        students.emplace_back(make_pair(name, gpa));
    }
    sort(begin(students), end(students));

    for (const auto &p : students)
    {
        //cout << get<0>(p) << " " << get<1>(p) << endl;
        cout << p.first << " " << p.second << endl;
    }
}

void example13()
{
    vector<tuple<string, int, double>> employees;

    string name;
    int year;
    double salary;

    while (cin >> name >> year >> salary)
    {
        employees.emplace_back(name, year, salary);
    }
    sort(begin(employees), end(employees), [](const auto t1, const auto t2) { return get<1>(t1) < get<1>(t2); });

    for (const auto &e : employees)
    {
        cout << get<0>(e) << " " << get<1>(e) << " " << get<2>(e) << endl;
        //cout << p.first << " " << p.second << endl;
    }
}

void example14()
{
    vector<int> v = {0, 4, 5, 6, 7, 3, 5, 6, 7, 20, 40};

    for (int x; cin >> x;)
    {
        cout << (binary_search(begin(v), end(v), x) ? "Yes" : "No") << endl;
    }
}

void example15()
{
    vector<int> v = {0, 4, 5, 6, 7, 3, 5, 6, 7, 20, 40};

    for (int x; cin >> x;)
    {
        auto p = auLowerBound(begin(v), end(v), x);
        if (p == end(v))
        {
            cout << "No elements equal or greated than " << x << endl;
        }
        else if (*p == x)
        {
            cout << "index of element equal to " << x << " is " << p - begin(v) << endl;
        }
        else
        {
            cout << "index of element greater than" << x << " is " << p - begin(v) << endl;
        }
    }
}

void example16()
{
    vector<int> v = {0, 4, 5, 10, 10, 10, 25, 25, 25, 20, 40};

    for (int x; cin >> x;)
    {
        auto p = equal_range(begin(v), end(v), x);
        cout << "Number of elements equal to " << x << " is " << p.second - p.first << endl;
    }
}

int main()
{
    problem04();
}
