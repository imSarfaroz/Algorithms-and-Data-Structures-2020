#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

using namespace std;

// struct IsEven
// {
//     //call operator
//     bool operator()(int n) const
//     {
//         return n % 2 == 0;
//     }
// };

// struct GreaterThan
// {
//     int mX;

//     GreaterThan(int x)
//     : mX(x)
//     {
//     }

//     bool operator()(int n) const
//     {
//         return n > mX;
//     }
// };

struct Student
{
    string mName;
    double mGpa;

    Student(const string &name, double gpa)
        : mName(name), mGpa(gpa)
        {
        }
};

int main()
{
    // int a[] = {3, 1, 20, 4, 7, 3, 2};

    // auto p = find(&a[0], end(a), 0);

    // if(p != end(a))
    // {
    //     cout << "The index of " << *p << " is " << p - begin(a) << endl;
    // }
    // else
    // {
    //     cout << "not found" << endl;
    // }

    // vector<int> a = {3, 1, 20, 4, 7, 8, 5};

    // vector<int>::iterator p = find(begin(a), end(a), 1000);

    // if(p != end(a))
    // {
    //     cout << "The index of " << *p << " is " << p - begin(a) << endl;
    // }
    // else
    // {
    //     cout << "not found" << endl;
    // }

      // vector<int> a = {3, 1, 20, 4, 7, 8, 5};

    // auto it = find(begin(a), end(a), IsEven());

    // if (it != end(a))
    // {
    //     cout << "The index of the first even number" << *it << " is " << it - begin(a) << endl;
    // }
    // else
    // {
    //     cout << "even numbers not found" << endl;
    // }

    // int x;
    // cin >> x;

    // vector<int> a = {3, 1, 20, 4, 7, 8, 5};

    // auto it = find_if(begin(a), end(a), GreaterThan(x)); 

    // if (it != end(a))
    // {
    //     cout << "number" << *it << " is the first number greater than " << x << endl;
    // }
    // else
    // {
    //     cout << "even numbers not found" << endl;
    // }

    // int x;
    // cin >> x;

    // vector<int> a = {3, 1, 20, 4, 7, 8, 5};

    // auto it = find_if(begin(a), end(a), [x](int n) { return n > x;});

    // if (it != end(a))
    // {
    //     cout << "number" << *it << " is the first number greater than " << x << endl;
    // }
    // else
    // {
    //     cout << "even numbers not found" << endl;
    // }

    vector<Student> students = {{"StudentD", 2.7}, {"StudentA", 4.0}, {"StudentX", 3.2}};

    sort(begin(students), end(students), [](const Student &s1, const Student &s2) { return s1.mName < s2.mName; });

    for(const auto &s: students)
    {
        cout << s.mName << " " << s.mGpa << endl;
    }

    cout << "---" << endl;

    sort(begin(students), end(students), [](const Student &s1, const Student &s2) { return s1.mGpa < s2.mGpa; });

    for (const auto &s : students)
    {
        cout << s.mName << " " << s.mGpa << endl;
    }
}
