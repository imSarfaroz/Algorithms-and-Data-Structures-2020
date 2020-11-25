#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

using namespace std;

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

    vector<int> a = {3, 1, 20, 4, 7, 8, 5};

    vector<int>::iterator p = find(begin(a), end(a), 1000);

    if(p != end(a))
    {
        cout << "The index of " << *p << " is " << p - begin(a) << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    
}
